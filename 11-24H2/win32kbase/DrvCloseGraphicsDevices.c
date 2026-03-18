/*
 * XREFs of DrvCloseGraphicsDevices @ 0x14004E5F0
 * Callers:
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x14004E670 (bSetDeviceSessionUsage.c)
 */

__int64 __fastcall DrvCloseGraphicsDevices(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  v1 = a1;
  result = W32GetSessionState(a1);
  v3 = *(_QWORD *)(result + 88);
  if ( v1 )
    v4 = *(_QWORD *)(v3 + 1192);
  else
    v4 = *(_QWORD *)(v3 + 1184);
  while ( v4 )
  {
    if ( *(_QWORD *)(v4 + 224) )
    {
      bSetDeviceSessionUsage(v4, 0LL);
      result = ObfDereferenceObject(*(PVOID *)(v4 + 224));
      *(_QWORD *)(v4 + 136) = 0LL;
      *(_QWORD *)(v4 + 224) = 0LL;
    }
    v4 = *(_QWORD *)(v4 + 128);
  }
  return result;
}
