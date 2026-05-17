/*
 * XREFs of PsspDumpThread @ 0x1800C77C4
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 * Callees:
 *     PsspInitializeContextOrExtendedContext @ 0x1800C7AF8 (PsspInitializeContextOrExtendedContext.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x180165170 (ZwGetContextThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDumpThread(__int64 *a1, __int16 a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // esi
  void *v12; // r15
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned int v15; // r12d
  __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h]
  int v20; // [rsp+3Ch] [rbp-C4h]
  int v21; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v22; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h]

  v21 = a3;
  v20 = a4;
  memset_thunk_772440563353939046(&v22, 0, 0x210uLL);
  v18 = 0;
  v9 = *a1;
  v10 = (a4 + 15) & 0xFFFFFFF0;
  v19 = a2 & 0x100;
  v11 = v10 + 128;
  if ( (a2 & 0x100) != 0 )
    v12 = (void *)(v9 + 128 + v10);
  else
    v12 = (void *)(v9 + 128);
  v13 = *((_DWORD *)a1 + 3);
  if ( v13 + v11 < v13 )
    return 3221225621LL;
  if ( v13 + v11 > *((_DWORD *)a1 + 2) )
    return 3221225507LL;
  memset_thunk_772440563353939046((void *)v9, 0, 0x80uLL);
  result = ZwQueryInformationThread(a6, 0LL, v9);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 0x400) != 0 && (int)ZwQueryInformationThread(a6, 21LL, v9 + 48) < 0 )
      *(_WORD *)(v9 + 56) = -1;
    result = ZwQueryInformationThread(a6, 1LL, v9 + 72);
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationThread(a6, 9LL, v9 + 104);
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationThread(a6, 20LL, &v18);
        if ( (int)result >= 0 )
        {
          *(_WORD *)(v9 + 124) = (v18 != 0) | *(_WORD *)(v9 + 124) & 0xFFFE;
          result = ZwQueryInformationThread(a6, 35LL, &v18);
          if ( (int)result >= 0 )
          {
            *(_WORD *)(v9 + 122) = v18;
            if ( v19 )
            {
              *(_WORD *)(v9 + 124) &= 1u;
              *(_WORD *)(v9 + 124) |= 2 * (_WORD)v20;
              v16 = PsspInitializeContextOrExtendedContext((void *)(v9 + 128), v10);
              if ( (int)ZwGetContextThread(a6, v16) < 0 )
              {
                *(_WORD *)(v9 + 124) &= 1u;
                v11 = 128;
              }
            }
            v15 = v11;
            if ( (int)ZwQueryInformationThread(a6, 38LL, &v22) >= 0 && v22 )
            {
              v11 += (v22 + 15) & 0xFFFFFFF0;
              v17 = *((_DWORD *)a1 + 3);
              if ( v17 + v11 < v17 || v17 + v11 > *((_DWORD *)a1 + 2) )
              {
                v11 = v15;
              }
              else
              {
                memmove(v12, Src, v22);
                *(_WORD *)(v9 + 120) = v22;
              }
            }
            *(_QWORD *)(v9 + 112) = MEMORY[0x7FFE0014];
            *((_DWORD *)a1 + 3) += v11;
            ++*((_DWORD *)a1 + 4);
            *a1 += v11;
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
