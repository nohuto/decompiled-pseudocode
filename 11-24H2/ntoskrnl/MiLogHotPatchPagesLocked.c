/*
 * XREFs of MiLogHotPatchPagesLocked @ 0x1407F4A10
 * Callers:
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchPagesLocked(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  _KPROCESS *Process; // rdi
  __int64 v12; // r8
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int ProcessId; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *p_ProcessId; // [rsp+98h] [rbp-70h]
  int v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A4h] [rbp-64h]
  __int64 *v28; // [rsp+A8h] [rbp-60h]
  int v29; // [rsp+B0h] [rbp-58h]
  int v30; // [rsp+B4h] [rbp-54h]
  __int64 *v31; // [rsp+B8h] [rbp-50h]
  int v32; // [rsp+C0h] [rbp-48h]
  int v33; // [rsp+C4h] [rbp-44h]
  int *v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+D0h] [rbp-38h]
  int v36; // [rsp+D4h] [rbp-34h]
  int *v37; // [rsp+D8h] [rbp-30h]
  int v38; // [rsp+E0h] [rbp-28h]
  int v39; // [rsp+E4h] [rbp-24h]
  __int64 *v40; // [rsp+E8h] [rbp-20h]
  int v41; // [rsp+F0h] [rbp-18h]
  int v42; // [rsp+F4h] [rbp-14h]
  int *v43; // [rsp+F8h] [rbp-10h]
  int v44; // [rsp+100h] [rbp-8h]
  int v45; // [rsp+104h] [rbp-4h]
  __int64 *v46; // [rsp+108h] [rbp+0h]
  int v47; // [rsp+110h] [rbp+8h]
  int v48; // [rsp+114h] [rbp+Ch]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = *(_QWORD *)&qword_140E37658;
    Process = CurrentThread->ApcState.Process;
    if ( **(_DWORD **)&qword_140E37658 > 5u )
    {
      LOBYTE(CurrentThread) = tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL);
      if ( (_BYTE)CurrentThread )
      {
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v45 = 0;
        v48 = 0;
        ProcessId = (unsigned int)PsGetProcessId(Process);
        p_ProcessId = &ProcessId;
        v28 = &v21;
        v31 = &v22;
        v34 = &v18;
        v37 = &v19;
        LODWORD(v20) = a5;
        v40 = &v20;
        LOWORD(v16) = WORD2(Process[3].PerProcessorCycleTimes);
        v43 = &v16;
        v46 = &v23;
        v26 = 4;
        v29 = 8;
        v32 = 8;
        v35 = 4;
        v38 = 4;
        v41 = 4;
        v47 = 8;
        v21 = a1;
        v22 = a2;
        v18 = a3;
        v19 = a4;
        v44 = 2;
        v23 = 0x1000000LL;
        LOBYTE(CurrentThread) = tlgWriteEx_EtwWriteEx(
                                  v10,
                                  (unsigned __int8 *)&byte_140057BC3,
                                  v12,
                                  1u,
                                  v14,
                                  v15,
                                  0xAu,
                                  &v24);
      }
    }
  }
  return (char)CurrentThread;
}
