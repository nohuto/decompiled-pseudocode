/*
 * XREFs of MiLogReserveVaFailed @ 0x140A8C8DC
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogReserveVaFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *v4; // rax
  _KPROCESS *Process; // rbx
  int v10; // ett
  __int64 v11; // r8
  __int64 v12; // rax
  _KAB_UM_PROCESS_TREE *Trees; // rax
  int v15; // [rsp+28h] [rbp-E0h]
  int v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  _KAB_UM_PROCESS_TREE *v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  int Flink; // [rsp+80h] [rbp-88h] BYREF
  __int16 SessionId; // [rsp+84h] [rbp-84h]
  __int16 v26; // [rsp+86h] [rbp-82h]
  struct _LIST_ENTRY *v27; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+98h] [rbp-70h] BYREF
  int *p_Flink; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  _KAB_UM_PROCESS_TREE **v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]
  __int64 *v44; // [rsp+108h] [rbp+0h]
  int v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+114h] [rbp+Ch]
  __int64 *v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+120h] [rbp+18h]
  int v49; // [rsp+124h] [rbp+1Ch]
  __int64 *v50; // [rsp+128h] [rbp+20h]
  int v51; // [rsp+130h] [rbp+28h]
  int v52; // [rsp+134h] [rbp+2Ch]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v4 = (struct _LIST_ENTRY *)&retaddr;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw((char *)&Process[3].ActiveGroupsMask.Masks[1] + 4);
    LODWORD(v4) = HIDWORD(Process[3].ActiveGroupsMask.Masks[1]);
    do
    {
      v10 = (int)v4;
      LODWORD(v4) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1,
                      (unsigned int)v4 | 0x800,
                      (signed __int32)v4);
    }
    while ( v10 != (_DWORD)v4 );
    if ( ((unsigned __int16)v4 & 0x800) == 0 )
    {
      Flink = (int)Process[1].Header.WaitListHead.Flink;
      SessionId = PsGetSessionId((__int64)Process);
      v26 = MEMORY[0xFFFFF780000002C4];
      v4 = Process[1].ThreadListHead.Flink;
      v27 = v4;
      if ( **(_DWORD **)&qword_140E37658 > 2u )
      {
        LOBYTE(v4) = tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000002000LL);
        if ( (_BYTE)v4 )
        {
          v31 = 0;
          v34 = 0;
          p_Flink = &Flink;
          v33 = 8;
          v32 = &v17;
          v12 = *(_QWORD *)&Process[1].AutoBoostState.TreeCount;
          v37 = 0;
          v18 = v12;
          v35 = &v18;
          Trees = Process[1].AutoBoostState.Trees;
          v40 = 0;
          v43 = 0;
          v46 = 0;
          v49 = 0;
          v52 = 0;
          v19 = Trees;
          v38 = &v19;
          v20 = *(_QWORD *)&Process[1].PrimaryGroup;
          v41 = &v20;
          v44 = &v21;
          v47 = &v22;
          v50 = &v23;
          v36 = 8;
          v39 = 8;
          v42 = 8;
          v45 = 8;
          v48 = 8;
          v51 = 8;
          v30 = 16;
          v17 = a1;
          v21 = a2;
          v22 = a3;
          v23 = a4;
          LOBYTE(v4) = tlgWriteEx_EtwWriteEx(v11, (unsigned __int8 *)&byte_140056E67, v11, 1u, v15, v16, 0xAu, &v28);
        }
      }
    }
  }
  return (char)v4;
}
