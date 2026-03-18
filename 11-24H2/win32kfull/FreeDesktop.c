/*
 * XREFs of FreeDesktop @ 0x14023C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1401940D0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _CancelMagnificationInputTransform @ 0x1401FCC60 (_CancelMagnificationInputTransform.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140208FC0 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     CleanupIAMAccess @ 0x140212B70 (CleanupIAMAccess.c)
 */

__int64 __fastcall FreeDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserGdiSessionState; // rax
  struct _KPROCESS *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KPROCESS *v11; // rdi
  void *v12; // rdi
  void *v13; // rcx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15, a2, a3);
  if ( *(_QWORD *)(v3 + 224) )
    CancelMagnificationInputTransform();
  CleanupIAMAccess((struct tagDESKTOP *)v3, v5);
  *(_DWORD *)(v3 + 48) |= 4u;
  UserGdiSessionState = W32GetUserGdiSessionState(v6);
  FreeView(*(PRKPROCESS *)(UserGdiSessionState + 40), (struct tagDESKTOP *)v3);
  v8 = (struct _KPROCESS *)ReferenceDwmProcess();
  v11 = v8;
  if ( v8 )
  {
    FreeView(v8, (struct tagDESKTOP *)v3);
    DereferenceDwmProcess(v11);
  }
  v12 = *(void **)(v3 + 136);
  if ( v12 )
  {
    RtlDestroyHeap(*(PVOID *)(v3 + 136));
    v4 = MmUnmapViewInSessionSpace(v12);
    ObfDereferenceObject(*(PVOID *)(v3 + 128));
  }
  v13 = *(void **)(v3 + 8);
  if ( v13 )
    Win32FreePool(v13);
  DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD *)(v3 + 40), v9, v10);
  if ( !v15 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
