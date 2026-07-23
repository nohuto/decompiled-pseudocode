/*
 * XREFs of WmipSendEnableRequest @ 0x140A8D0B0
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x1409B465C (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipWaitForCollectionEnabled @ 0x1407A6220 (WmipWaitForCollectionEnabled.c)
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     WmipReleaseCollectionEnabled @ 0x140AB7F64 (WmipReleaseCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(ULONG_PTR BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // r12d
  _DWORD *v8; // r14
  _DWORD *v9; // r15
  int v10; // eax
  _DWORD *v11; // r13
  _DWORD *v12; // [rsp+60h] [rbp+18h]

  if ( a2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 88);
    v5 = 2;
    *(_DWORD *)(BugCheckParameter2 + 88) = v4 + 1;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 92);
    v5 = 4;
    *(_DWORD *)(BugCheckParameter2 + 92) = v4 + 1;
  }
  if ( v4 || (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
  {
    if ( !a2 && (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
      WmipWaitForCollectionEnabled(BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 16) |= v5;
    v8 = (_DWORD *)(BugCheckParameter2 + 88);
    v9 = (_DWORD *)(BugCheckParameter2 + 92);
    do
    {
      v6 = WmipSendEnableDisableRequest(a2 != 0 ? 4 : 6, BugCheckParameter2, a2);
      if ( a2 )
      {
        v8 = (_DWORD *)(BugCheckParameter2 + 88);
        v10 = *(_DWORD *)(BugCheckParameter2 + 88);
      }
      else
      {
        v9 = (_DWORD *)(BugCheckParameter2 + 92);
        v10 = *(_DWORD *)(BugCheckParameter2 + 92);
      }
      v12 = v9;
      v11 = v8;
      if ( v10 )
        break;
      v6 = WmipSendEnableDisableRequest(a2 != 0 ? 5 : 7, BugCheckParameter2, a2);
      if ( a2 )
        v9 = (_DWORD *)(BugCheckParameter2 + 92);
      else
        v8 = (_DWORD *)(BugCheckParameter2 + 88);
      if ( !a2 )
        v11 = v12;
    }
    while ( *v11 );
    *(_DWORD *)(BugCheckParameter2 + 16) &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)BugCheckParameter2);
  }
  return v6;
}
