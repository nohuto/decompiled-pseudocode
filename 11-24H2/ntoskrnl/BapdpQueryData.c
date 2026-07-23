/*
 * XREFs of BapdpQueryData @ 0x140C4198C
 * Callers:
 *     BapdpProcessEtwEvents @ 0x140651404 (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x140651540 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140C40E08 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140C40EE8 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140C41028 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140C41108 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140C411E8 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140C412CC (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140C417A8 (BapdpProcessWmdResults.c)
 *     BapdpRegisterWbclData @ 0x140C42188 (BapdpRegisterWbclData.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5, _OWORD *a6)
{
  __int64 *v9; // r8
  int i; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v9 = (__int64 *)qword_140E62450;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v9 == &qword_140E62450 )
        return 3221226021LL;
      v11 = v9[2];
      v9 = (__int64 *)*v9;
      if ( (unsigned int)(*(_DWORD *)(v11 + 32) - 1) <= 1 )
      {
        v12 = *a2 - *(_QWORD *)(v11 + 16);
        if ( *a2 == *(_QWORD *)(v11 + 16) )
          v12 = a2[1] - *(_QWORD *)(v11 + 24);
        if ( !v12 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v13 = *(_DWORD *)(v11 + 36);
  if ( *a5 >= v13 )
  {
    memmove(a4, (const void *)(v11 + *(unsigned int *)(v11 + 40)), *(unsigned int *)(v11 + 36));
    if ( a6 )
      *a6 = *(_OWORD *)v11;
    return 0LL;
  }
  else
  {
    *a5 = v13;
    return 3221225507LL;
  }
}
