/*
 * XREFs of PiiFilterEmbeddedPathsExecute @ 0x180675E34
 * Callers:
 *     PiiFilterExecute @ 0x180676284 (PiiFilterExecute.c)
 * Callees:
 *     AslFree @ 0x180139254 (AslFree.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     RtlStringCopyWorkerW @ 0x1801AAD3C (RtlStringCopyWorkerW.c)
 *     _o_iswspace_0 @ 0x1802D2548 (_o_iswspace_0.c)
 *     ?GetValue@RtlNameValueArray@@QEBAPEBG_K@Z @ 0x180675CC8 (-GetValue@RtlNameValueArray@@QEBAPEBG_K@Z.c)
 *     ?PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z @ 0x180675D28 (-PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180675DC8 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     AslStringUpper @ 0x180676608 (AslStringUpper.c)
 */

__int64 __fastcall PiiFilterEmbeddedPathsExecute(unsigned __int16 *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  wchar_t *v7; // r13
  int v8; // edi
  unsigned __int16 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 *v16; // rdx
  RtlNameValueArray *v17; // r10
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rbp
  const unsigned __int16 *Value; // r12
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rbp
  wchar_t *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int16 *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  const wchar_t *v31; // rcx
  unsigned __int16 *i; // rdx
  wchar_t *v33; // rax
  wchar_t *v34; // rbx
  wchar_t *v35; // rdi
  int v36; // ebp
  BOOL v37; // eax
  char *v38; // rdi
  unsigned __int64 v39; // rcx
  unsigned __int64 v41; // [rsp+78h] [rbp+10h] BYREF
  wchar_t *Heap; // [rsp+80h] [rbp+18h]

  v41 = a2;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v7 = Heap;
  if ( Heap )
  {
    v9 = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    if ( v9 )
    {
      v8 = RtlStringCopyWorkerW(a1, 260LL, v10, a4);
      if ( v8 >= 0 )
      {
        v11 = a3[8];
        v12 = 0;
        v13 = a3[2];
        if ( v13 + v11 )
        {
          while ( 1 )
          {
            v14 = v12;
            if ( v12 >= v13 )
            {
              v17 = (RtlNameValueArray *)(a3 + 6);
              v18 = v12 - v13;
              v16 = 0LL;
              if ( v18 < v11 )
              {
                v19 = a3[7];
                v41 = 0LL;
                if ( (int)ULongLongMult(v19, v18, &v41) < 0
                  || (v16 = (__int64 *)(a3[11] + v41), (unsigned __int64)v16 < a3[11]) )
                {
                  v16 = 0LL;
                }
              }
              v14 = v12 - a3[2];
            }
            else
            {
              v15 = a3[1];
              v41 = 0LL;
              if ( (int)ULongLongMult(v15, v12, &v41) < 0
                || (v16 = (__int64 *)(a3[5] + v41), (unsigned __int64)v16 < a3[5]) )
              {
                v16 = 0LL;
              }
              v17 = (RtlNameValueArray *)a3;
            }
            v20 = *v16;
            Value = RtlNameValueArray::GetValue(v17, v14);
            v8 = RtlStringCopyWorkerW(v9, 260LL, v22, (__int64)a1);
            if ( v8 < 0 )
              break;
            AslStringUpper(v9);
            v8 = RtlStringCopyWorkerW(v7, 260LL, v23, v20);
            if ( v8 < 0 )
              break;
            v24 = -1LL;
            do
              ++v24;
            while ( v7[v24] );
            if ( v24 && (AslStringUpper(v7), (v25 = wcsstr(v9, v7)) != 0LL) )
            {
              v27 = v25 - v9;
              a1[v27] = 0;
              v28 = &a1[v24 + v27];
              if ( v28 >= a1 + 260 )
                break;
              v8 = RtlStringCopyWorkerW(v9, 260LL, v26, (__int64)v28);
              if ( v8 < 0 )
                break;
              v8 = RtlStringCchCatW(a1, v29, Value);
              if ( v8 < 0 )
                break;
              v8 = RtlStringCchCatW(a1, v30, v9);
              if ( v8 < 0 )
                break;
            }
            else
            {
              ++v12;
            }
            v11 = a3[8];
            v13 = a3[2];
            if ( v12 >= v13 + v11 )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          v8 = RtlStringCopyWorkerW(v9, 260LL, v11, (__int64)a1);
          if ( v8 >= 0 )
          {
            AslStringUpper(v9);
            v31 = v9;
            while ( 1 )
            {
              v33 = wcsstr(v31, L"\\USERS\\");
              if ( !v33 )
                break;
              v31 = v33 + 7;
              for ( i = &a1[v33 + 7 - v9]; *v31 && *v31 != 92 && i < a1 + 260; ++i )
              {
                ++v31;
                *i = 120;
              }
            }
            v34 = wcschr(a1, 0x40u);
            if ( v34 )
            {
              do
              {
                if ( !*v34 )
                  break;
                v35 = v34 - 1;
                LODWORD(v41) = 0;
                v36 = 0;
                while ( *++v34 && !(unsigned int)PiipIsInvalidEmailCharacter(*v34, 0, (int *)&v41) )
                {
                  if ( *v34 == 46 )
                    v36 = 1;
                }
                v37 = (unsigned int)o_iswspace_0(*v34) || !*v34 || *v34 == 62;
                if ( v36 && v37 )
                {
                  --v34;
                  LODWORD(v41) = 0;
                  while ( v35 >= a1 )
                  {
                    if ( (unsigned int)PiipIsInvalidEmailCharacter(*v35, 1, (int *)&v41) )
                    {
                      if ( *v35 != 60 && !(unsigned int)o_iswspace_0(*v35) )
                        goto LABEL_64;
                      break;
                    }
                    --v35;
                  }
                  if ( !(_DWORD)v41 )
                  {
                    v38 = (char *)(v35 + 1);
                    v39 = (unsigned __int64)((char *)v34 - v38 + 2) >> 1;
                    if ( v38 > (char *)v34 )
                      v39 = 0LL;
                    if ( v39 )
                    {
                      while ( v39 )
                      {
                        *(_WORD *)v38 = 35;
                        v38 += 2;
                        --v39;
                      }
                    }
                  }
                }
LABEL_64:
                v34 = wcschr(v34, 0x40u);
              }
              while ( v34 );
              v7 = Heap;
            }
            v8 = 0;
          }
        }
      }
    }
    else
    {
      v8 = -1073741801;
    }
    AslFree(NtCurrentPeb()->ProcessHeap, v7);
    if ( v9 )
      AslFree(NtCurrentPeb()->ProcessHeap, v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
