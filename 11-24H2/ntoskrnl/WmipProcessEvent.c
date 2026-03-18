/*
 * XREFs of WmipProcessEvent @ 0x1409CB800
 * Callers:
 *     WmipGenerateBinaryMofNotification @ 0x1407A5A68 (WmipGenerateBinaryMofNotification.c)
 *     WmipSendGuidUpdateNotifications @ 0x1409CA5B4 (WmipSendGuidUpdateNotifications.c)
 *     WmipEventNotification @ 0x1409CB790 (WmipEventNotification.c)
 *     WmipGenerateMofResourceNotification @ 0x140AB0184 (WmipGenerateMofResourceNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     WmipWriteWnodeToObject @ 0x1403DC55C (WmipWriteWnodeToObject.c)
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     WmipDereferenceEvent @ 0x1409C9CE0 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409CB50C (WmipIncludeStaticNames.c)
 *     WmipFindGEByGuid @ 0x1409CD8B0 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409CE1D4 (WmipUnreferenceEntry.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipProcessEvent(unsigned int *Src, __int64 a2, char a3)
{
  char v3; // bp
  unsigned int *v4; // rsi
  unsigned int *v5; // rdi
  unsigned int *v6; // rbx
  __int64 GEByGuid; // r13
  unsigned int v8; // r15d
  _QWORD *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  char *v14; // rax
  char v16; // [rsp+88h] [rbp+10h]
  char *v18; // [rsp+98h] [rbp+20h]

  v16 = a2;
  v3 = a3;
  v4 = Src;
  if ( (Src[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = Src;
    v18 = 0LL;
LABEL_3:
    if ( (v6[11] & 0x80u) != 0 )
      v6 = WmipIncludeStaticNames(v6, *v6);
    LOBYTE(a2) = 1;
    GEByGuid = WmipFindGEByGuid(v6 + 6, a2);
    if ( GEByGuid )
    {
      v8 = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v9 = *(_QWORD **)(GEByGuid + 40);
      if ( v9 != (_QWORD *)(GEByGuid + 40) )
      {
        do
        {
          v10 = (__int64)(v9 - 5);
          v9 = (_QWORD *)*v9;
          if ( ObReferenceObjectSafe(v10) )
          {
            if ( (*(_DWORD *)(v10 + 164) & 2) != 0 )
            {
              if ( *(_QWORD *)(v10 + 72) )
                guard_dispatch_icall_no_overrides(v6, *(_QWORD *)(v10 + 80), v11, v12);
            }
            else if ( (int)WmipWriteWnodeToObject(v10, v6, v16) < 0 )
            {
              v8 = -1073741823;
            }
            ObfDereferenceObject((PVOID)v10);
          }
        }
        while ( v9 != (_QWORD *)(GEByGuid + 40) );
        v5 = (unsigned int *)v18;
        v4 = Src;
        v3 = a3;
      }
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v14 = WmipDereferenceEvent((__int64)Src);
  v18 = v14;
  v5 = (unsigned int *)v14;
  if ( v14 )
  {
    v6 = (unsigned int *)v14;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}
