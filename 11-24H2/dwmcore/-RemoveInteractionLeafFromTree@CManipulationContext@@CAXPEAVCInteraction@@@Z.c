/*
 * XREFs of ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1802141A0
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180193BC0 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x180257550 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(struct CInteraction *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct CInteraction *v5; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  struct CInteraction **v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v13 = 0;
    v11 = &v5;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1803F8D20;
    EventDescriptor.Keyword = 2LL;
    v5 = a1;
    v12 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1803F8D20;
    v8 = &unk_1803CB62E;
    UserData.Reserved = 2;
    v9 = 69;
    v10 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)a1 + 9) + 48LL))((char *)a1 + 72);
  v2 = *((_QWORD *)a1 + 28);
  if ( v2 )
  {
    if ( *(struct CInteraction **)(v2 + 248) == a1 )
      *(_QWORD *)(v2 + 248) = *((_QWORD *)a1 + 29);
    *((_QWORD *)a1 + 28) = 0LL;
  }
  v3 = *((_QWORD *)a1 + 30);
  if ( v3 )
    *(_QWORD *)(v3 + 232) = *((_QWORD *)a1 + 29);
  v4 = *((_QWORD *)a1 + 29);
  if ( v4 )
    *(_QWORD *)(v4 + 240) = *((_QWORD *)a1 + 30);
  *((_QWORD *)a1 + 30) = 0LL;
  *((_QWORD *)a1 + 29) = 0LL;
  *((_QWORD *)a1 + 27) = 0LL;
}
