/*
 * XREFs of ?OnConnected@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180133840
 * Callers:
 *     <none>
 * Callees:
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18002EECC (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnConnected(InputDelegationInputObjectProxy *this)
{
  __int64 v2; // rcx
  Microsoft::Bamo::BaseBamoConnection *v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
  Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(v3, &v5);
  if ( !v5 )
  {
    LOBYTE(v5) = 0;
    if ( (int)CapabilityCheck(-6LL, L"inputForegroundObservation", &v5) >= 0 )
      *((_BYTE *)this + 128) = (_BYTE)v5 != 0;
    RevertToSelf();
  }
  return 0LL;
}
