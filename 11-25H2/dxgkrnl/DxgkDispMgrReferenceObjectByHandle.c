/*
 * XREFs of DxgkDispMgrReferenceObjectByHandle @ 0x1403E6E50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403B80D0 (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrReferenceObjectByHandle(void *a1, ACCESS_MASK a2, PVOID *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdi
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = ObReferenceObjectByHandleWithTag(a1, a2, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, &Object, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 1226;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to open DispMgr handle with status = 0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x4B677844u);
    return (unsigned int)v5;
  }
  else if ( *(_QWORD *)Object )
  {
    *a3 = Object;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1232;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Opened DispMgr object, but it was not a valid target manager.",
      1232LL,
      0LL,
      0LL,
      0LL,
      0LL);
    NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
    return 3221225485LL;
  }
}
