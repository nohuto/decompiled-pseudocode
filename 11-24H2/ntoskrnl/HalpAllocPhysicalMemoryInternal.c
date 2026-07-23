/*
 * XREFs of HalpAllocPhysicalMemoryInternal @ 0x140C69650
 * Callers:
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 * Callees:
 *     HalpAllocPhysicalMemoryFromDescriptor @ 0x140C10274 (HalpAllocPhysicalMemoryFromDescriptor.c)
 */

unsigned __int64 __fastcall HalpAllocPhysicalMemoryInternal(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r14
  _QWORD *v10; // rsi
  _QWORD *v11; // r15
  _QWORD *v12; // r13
  unsigned __int64 result; // rax
  __int64 v14; // r8
  char *v15; // r9
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  char *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // [rsp+30h] [rbp-38h]
  __int64 v27; // [rsp+38h] [rbp-30h]
  unsigned int v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v4 = a3;
  if ( HalpUsedAllocDescriptors + 2 <= (unsigned int)HalpAllocationDescriptorArraySize || HalpDescriptorPoolLow )
  {
    v5 = -1LL;
    v6 = 1LL;
    if ( a2 )
      v5 = *a2 >> 12;
    v27 = a3;
    if ( v5 >= a3 )
    {
      if ( HalpMiscDiscardLowMemory && v5 - a3 >= 0x100 )
        v6 = 256LL;
      v7 = (_QWORD **)(a1 + 32);
      v8 = 0LL;
      v26 = v7;
      v9 = 0LL;
      v10 = *v7;
      if ( *v7 != v7 )
      {
        v11 = v7;
        do
        {
          v12 = v8;
          v8 = v10;
          result = HalpAllocPhysicalMemoryFromDescriptor((__int64)v10, v5, v6, v4, a4);
          if ( result )
          {
            v9 = (result >> 12) - v10[4];
            if ( result >> 12 == v10[4] || !HalpDescriptorPoolLow )
              break;
          }
          v10 = (_QWORD *)*v10;
          v4 = a3;
          a4 = v29;
        }
        while ( v10 != v11 );
        if ( v10 != v26 )
        {
          if ( !v9 && v12 && *((_DWORD *)v12 + 6) == 26 && (v14 = v12[5], v14 + v12[4] == v8[4]) )
          {
            v15 = 0LL;
            v12[5] = v14 + v27;
          }
          else
          {
            v16 = HalpUsedAllocDescriptors;
            v15 = (char *)HalpAllocationDescriptorArray + 48 * (unsigned int)HalpUsedAllocDescriptors;
            *((_QWORD *)v15 + 5) = v27;
            v17 = v8[4];
            *((_DWORD *)v15 + 6) = 26;
            *((_QWORD *)v15 + 4) = v9 + v17;
            HalpUsedAllocDescriptors = v16 + 1;
          }
          v18 = v8[5] - v27;
          if ( v9 )
          {
            v22 = v18 - v9;
            if ( v22 )
            {
              v23 = (char *)HalpAllocationDescriptorArray + 48 * (unsigned int)HalpUsedAllocDescriptors++;
              *((_QWORD *)v23 + 5) = v22;
              *((_QWORD *)v23 + 4) = v8[4] + v9 + a3;
              *((_DWORD *)v23 + 6) = *((_DWORD *)v8 + 6);
              v24 = *v8;
              if ( *(_QWORD **)(*v8 + 8LL) != v8 )
                goto LABEL_34;
              *(_QWORD *)v23 = v24;
              *((_QWORD *)v23 + 1) = v8;
              *(_QWORD *)(v24 + 8) = v23;
              *v8 = v23;
            }
            v8[5] = v9;
            v25 = *v8;
            if ( *(_QWORD **)(*v8 + 8LL) == v8 )
            {
              *(_QWORD *)v15 = v25;
              *((_QWORD *)v15 + 1) = v8;
              *(_QWORD *)(v25 + 8) = v15;
              *v8 = v15;
              goto LABEL_36;
            }
          }
          else
          {
            v8[4] += v27;
            v8[5] = v18;
            if ( v15 )
            {
              v19 = (_QWORD *)v8[1];
              if ( (_QWORD *)*v19 != v8 )
                goto LABEL_34;
              *(_QWORD *)v15 = v8;
              *((_QWORD *)v15 + 1) = v19;
              *v19 = v15;
              v8[1] = v15;
            }
            if ( v8[5] )
            {
LABEL_36:
              HalpMmEarlyPhysicalPagesAllocated += a3;
              return result;
            }
            v20 = *v8;
            if ( *(_QWORD **)(*v8 + 8LL) == v8 )
            {
              v21 = (_QWORD *)v8[1];
              if ( (_QWORD *)*v21 == v8 )
              {
                *v21 = v20;
                *(_QWORD *)(v20 + 8) = v21;
                goto LABEL_36;
              }
            }
          }
LABEL_34:
          __fastfail(3u);
        }
      }
    }
  }
  return 0LL;
}
