/*
 * XREFs of NtCreateThread @ 0x1407738E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1403E6DD0 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PspCreateThread @ 0x1408A42C8 (PspCreateThread.c)
 */

__int64 __fastcall NtCreateThread(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  _BYTE *v12; // rbx
  __int64 result; // rax
  char PreviousMode; // dl
  __int64 v15; // rcx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  _KPROCESS *Process; // rax
  __int16 v21; // ax
  _BYTE *v23; // [rsp+78h] [rbp-5B0h]
  __int128 v24; // [rsp+90h] [rbp-598h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-588h]
  __int64 v26; // [rsp+B0h] [rbp-578h]
  __int128 v27; // [rsp+B8h] [rbp-570h]
  __int64 v28; // [rsp+C8h] [rbp-560h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v30; // [rsp+E8h] [rbp-540h]
  char v31; // [rsp+F0h] [rbp-538h] BYREF
  __int128 v32; // [rsp+F1h] [rbp-537h]
  __int64 v33; // [rsp+101h] [rbp-527h]
  _BYTE v34[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v35; // [rsp+1A8h] [rbp-480h]

  v12 = (_BYTE *)a6;
  memset_0(&v24, 0, 0x48uLL);
  v32 = 0LL;
  v33 = 0LL;
  if ( !a6 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a1;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    if ( a5 )
    {
      if ( (a5 & 3) != 0 )
        goto LABEL_16;
      v16 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v16 = a5;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
    }
    if ( (a6 & 0xF) == 0 )
    {
      v17 = v34;
      v18 = 9LL;
      do
      {
        *v17 = *(_OWORD *)v12;
        v17[1] = *((_OWORD *)v12 + 1);
        v17[2] = *((_OWORD *)v12 + 2);
        v17[3] = *((_OWORD *)v12 + 3);
        v17[4] = *((_OWORD *)v12 + 4);
        v17[5] = *((_OWORD *)v12 + 5);
        v17[6] = *((_OWORD *)v12 + 6);
        v17 += 8;
        *(v17 - 1) = *((_OWORD *)v12 + 7);
        v12 += 128;
        --v18;
      }
      while ( v18 );
      *v17 = *(_OWORD *)v12;
      v17[1] = *((_OWORD *)v12 + 1);
      v17[2] = *((_OWORD *)v12 + 2);
      v17[3] = *((_OWORD *)v12 + 3);
      v17[4] = *((_OWORD *)v12 + 4);
      v23 = v34;
      v35 = (v35 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
      if ( (a7 & 3) == 0 )
      {
        v12 = v34;
        goto LABEL_18;
      }
    }
LABEL_16:
    ExRaiseDatatypeMisalignment();
  }
  v23 = (_BYTE *)a6;
LABEL_18:
  result = RtlpSanitizeContextFlags((unsigned int *)v12 + 12, PreviousMode);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)v12 + 12) &= 0x10001Fu;
    *a1 = 0LL;
    v19 = *(_OWORD *)a7;
    v24 = *(_OWORD *)a7;
    if ( v24 == 0 )
    {
      v24 = v19;
      v25 = *(_OWORD *)(a7 + 16);
      v26 = *(_QWORD *)(a7 + 32);
      if ( v26 )
      {
        v30 = KeGetCurrentThread();
        Process = v30->ApcState.Process;
        if ( Process[1].ReadyTime )
        {
          v21 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v21 == 332 || v21 == 452 )
          {
            v28 = v26;
            v27 = v25;
            v26 = 0LL;
            v25 = 0LL;
          }
        }
        v31 = 1;
        return PspCreateThread(a1, a2, a3, a4, 0LL, 0LL, a5, v23, &v24, a8 == 1, 0LL, 0LL, &v31);
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
