/*
 * XREFs of ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1401F3D58
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C7774 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     NtInputSpaceRegionFromPoint @ 0x1401B7A50 (NtInputSpaceRegionFromPoint.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E1C98 (RIMSetPointerDeviceInputSpace.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall InputConfig::GetInputSpace(struct _LUID a1, struct CLockedInputSpace *a2)
{
  char v2; // di
  DWORD LowPart; // ebx
  _QWORD **v5; // r14
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  _QWORD **v8; // r8
  _QWORD *i; // rdx
  _DWORD *v10; // rcx
  tagDomLock *v12; // [rsp+20h] [rbp-28h] BYREF
  LONG HighPart; // [rsp+54h] [rbp+Ch]

  HighPart = a1.HighPart;
  v2 = 0;
  *(_QWORD *)a2 = 0LL;
  LowPart = a1.LowPart;
  v5 = *(_QWORD ***)(((__int64 (__fastcall *)(_QWORD))W32GetUserSessionState)(a1) + 18688);
  UserSessionState = W32GetUserSessionState(v6);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v12, (PERESOURCE *)(UserSessionState + 18696));
  v8 = (_QWORD **)*v5;
  for ( i = (_QWORD *)**v5; ; i = (_QWORD *)*i )
  {
    v10 = 0LL;
    if ( v8 != v5 )
      v10 = v8 + 2;
    if ( !v10 )
      break;
    if ( LowPart == *v10 && HighPart == v10[1] )
    {
      *(_QWORD *)a2 = v10;
      v2 = 1;
      break;
    }
    v8 = (_QWORD **)i;
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v12);
  return v2;
}
