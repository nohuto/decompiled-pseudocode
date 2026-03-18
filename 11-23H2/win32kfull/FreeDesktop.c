/*
 * XREFs of FreeDesktop @ 0x1C00A1800
 * Callers:
 *     <none>
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C0020390 (_SetMagnificationInputTransform.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0042A70 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     CleanupIAMAccess @ 0x1C00728B0 (CleanupIAMAccess.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C00A19D0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KPROCESS *v6; // rax
  struct _KPROCESS *v7; // rdi
  void *v8; // rdi
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+40h] [rbp-18h]
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  if ( *(_QWORD *)(v1 + 224) )
  {
    v15 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v18 = 3;
    SetMagnificationInputTransform((__int128 *)&v15, v3, v4, v5);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1);
  *(_DWORD *)(v1 + 48) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v6 = (struct _KPROCESS *)ReferenceDwmProcess();
  v7 = v6;
  if ( v6 )
  {
    FreeView(v6, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v7);
  }
  v8 = *(void **)(v1 + 136);
  if ( v8 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 136));
    v2 = MmUnmapViewInSessionSpace(v8);
    ObfDereferenceObject(*(PVOID *)(v1 + 128));
  }
  v9 = *(void **)(v1 + 8);
  if ( v9 )
    Win32FreePool(v9);
  UnlockObjectAssignment(v1 + 40);
  if ( !v19 )
    UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v2;
}
