/*
 * XREFs of PsspDumpThread @ 0x1800C30B4
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 * Callees:
 *     PsspInitializeContextOrExtendedContext @ 0x1800C33E8 (PsspInitializeContextOrExtendedContext.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x180163BE0 (ZwGetContextThread.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h]
  int v21; // [rsp+3Ch] [rbp-C4h]
  int v22; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v23; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h]

  v22 = a3;
  v21 = a4;
  v18 = 0;
  memset_thunk_772440563353939046(&v23, 0, 0x210uLL);
  v19 = 0;
  v9 = *a1;
  v10 = (a4 + 15) & 0xFFFFFFF0;
  v20 = a2 & 0x100;
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
  result = ZwQueryInformationThread(a6, 0LL, v9, 48LL, &v18);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 0x400) != 0 && (int)ZwQueryInformationThread(a6, 21LL, v9 + 48, 24LL, &v18) < 0 )
      *(_WORD *)(v9 + 56) = -1;
    result = ZwQueryInformationThread(a6, 1LL, v9 + 72, 32LL, &v18);
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationThread(a6, 9LL, v9 + 104, 8LL, &v18);
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationThread(a6, 20LL, &v19, 4LL, &v18);
        if ( (int)result >= 0 )
        {
          *(_WORD *)(v9 + 124) = (v19 != 0) | *(_WORD *)(v9 + 124) & 0xFFFE;
          result = ZwQueryInformationThread(a6, 35LL, &v19, 4LL, &v18);
          if ( (int)result >= 0 )
          {
            *(_WORD *)(v9 + 122) = v19;
            if ( v20 )
            {
              *(_WORD *)(v9 + 124) &= 1u;
              *(_WORD *)(v9 + 124) |= 2 * (_WORD)v21;
              v16 = PsspInitializeContextOrExtendedContext((void *)(v9 + 128), v10);
              if ( (int)ZwGetContextThread(a6, v16) < 0 )
              {
                *(_WORD *)(v9 + 124) &= 1u;
                v11 = 128;
              }
            }
            v15 = v11;
            if ( (int)ZwQueryInformationThread(a6, 38LL, &v23, 528LL, &v18) >= 0 && v23 )
            {
              v11 += (v23 + 15) & 0xFFFFFFF0;
              v17 = *((_DWORD *)a1 + 3);
              if ( v17 + v11 < v17 || v17 + v11 > *((_DWORD *)a1 + 2) )
              {
                v11 = v15;
              }
              else
              {
                memmove(v12, Src, v23);
                *(_WORD *)(v9 + 120) = v23;
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
