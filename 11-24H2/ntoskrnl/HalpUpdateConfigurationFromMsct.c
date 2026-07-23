/*
 * XREFs of HalpUpdateConfigurationFromMsct @ 0x140C146D0
 * Callers:
 *     HalpGetNumaProcMemoryCount @ 0x140C13460 (HalpGetNumaProcMemoryCount.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpUpdateConfigurationFromMsct(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r11
  __int64 v10; // r10
  _DWORD *v11; // rsi
  unsigned int v12; // r15d
  unsigned int v13; // ebp
  __int64 v14; // r8
  unsigned int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rcx
  unsigned __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v21; // r11d
  unsigned int v22; // edi
  unsigned int v23; // edx
  unsigned int v24; // r10d
  __int64 i; // rax
  unsigned int *v26; // rcx
  __int64 v27; // rax
  unsigned int j; // edx
  unsigned int v29; // r9d
  __int64 k; // rdi
  __int64 v31; // rdi
  __int64 v32; // rcx
  unsigned int *v33; // rdi
  unsigned __int64 v34; // [rsp+0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+8h] [rbp-40h]

  v9 = *(unsigned int *)(HalpAcpiMsct + 4);
  if ( (unsigned int)v9 >= 0x38 )
  {
    v10 = *(unsigned int *)(HalpAcpiMsct + 36);
    if ( (unsigned int)v9 >= (unsigned int)v10 && (unsigned int)v10 >= 0x38 )
    {
      v11 = a5;
      if ( !a5 || (unsigned int)(*(_DWORD *)(HalpAcpiMsct + 44) + 1) >= *a5 )
      {
        v12 = *(_DWORD *)(HalpAcpiMsct + 40) + 1;
        if ( v12 <= a2 )
        {
          v13 = *a1;
          if ( *a1 <= a2 && (!a4 || *a3 <= a4) )
          {
            v14 = HalpAcpiMsct + v10;
            v15 = 0;
            LODWORD(v34) = 0;
            v16 = 0;
            v17 = HalpAcpiMsct + v10;
            v18 = HalpAcpiMsct + v9;
            v35 = v18;
            while ( v17 + 2 <= v18 )
            {
              v19 = *(unsigned __int8 *)(v17 + 1);
              if ( (unsigned __int8)v19 < 2u )
                break;
              v20 = v17 + v19;
              if ( v17 + v19 > v18 )
                break;
              v21 = *(_DWORD *)(v17 + 6);
              v22 = *(_DWORD *)(v17 + 2);
              if ( v21 < v22 )
                return;
              v23 = v21 - v22 + 1;
              if ( v23 > a2 )
                return;
              v15 += v23;
              if ( v15 > a2 )
                return;
              v24 = *(_DWORD *)(v17 + 10);
              if ( v24 > 0x800 || a4 && v24 > a4 )
                return;
              v16 += v23 * v24;
              if ( v16 > 0x800 || a4 && v16 > a4 )
                return;
              while ( v22 <= v21 )
              {
                for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
                {
                  if ( *(_DWORD *)(a6 + 4 * i) == v22 )
                  {
                    v34 = (unsigned int)v34 | (unsigned __int64)(1LL << i);
                    if ( *(_DWORD *)(a7 + 4LL * (unsigned int)i) > v24 )
                      return;
                    break;
                  }
                }
                ++v22;
              }
              v18 = v35;
              v17 = v20;
            }
            if ( (unsigned int)v34 == (1LL << v13) - 1 && v12 == v15 )
            {
              v26 = (unsigned int *)(v14 + 2);
              if ( v14 + 2 <= v18 )
              {
                do
                {
                  v27 = *(unsigned __int8 *)(v14 + 1);
                  if ( (unsigned __int8)v27 < 2u || v14 + v27 > v18 )
                    break;
                  for ( j = *v26; j <= *(_DWORD *)(v14 + 6); ++j )
                  {
                    v29 = *(_DWORD *)(v14 + 10);
                    for ( k = 0LL; (unsigned int)k < *a1; k = (unsigned int)(k + 1) )
                    {
                      if ( *(_DWORD *)(a6 + 4 * k) == j )
                      {
                        v29 -= *(_DWORD *)(a7 + 4 * k);
                        break;
                      }
                    }
                    *(_DWORD *)(a7 + 4 * k) = *(_DWORD *)(v14 + 10);
                    if ( (_DWORD)k == *a1 )
                    {
                      *(_DWORD *)(a6 + 4 * k) = j;
                      ++*a1;
                    }
                    v31 = *a3;
                    *a3 = v31 + v29;
                    if ( a8 && v29 )
                    {
                      v32 = v29;
                      v33 = (unsigned int *)(a8 + 4 * v31);
                      while ( v32 )
                      {
                        *v33++ = j;
                        --v32;
                      }
                    }
                  }
                  v14 += *(unsigned __int8 *)(v14 + 1);
                  v26 = (unsigned int *)(v14 + 2);
                }
                while ( v14 + 2 <= v18 );
                v11 = a5;
              }
              if ( v11 )
                *v11 = *(_DWORD *)(HalpAcpiMsct + 44) + 1;
            }
          }
        }
      }
    }
  }
}
