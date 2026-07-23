/*
 * XREFs of ObReferenceObjectByName @ 0x14083B4F0
 * Callers:
 *     IopGetDriverPathInformation @ 0x1405933C8 (IopGetDriverPathInformation.c)
 *     ObShutdownSystem @ 0x140741200 (ObShutdownSystem.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x14099FC84 (IopGetLegacyVetoListDrivers.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x1404014C0 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x14047E920 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 *     ObpCaptureObjectName @ 0x1408A5650 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        PADAPTER_OBJECT *a8)
{
  __int64 v11; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  int AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-48h]
  __int128 v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26[20]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v27[224]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v27, 0, sizeof(v27));
  DmaAdapter = 0LL;
  v19 = 0LL;
  memset_0(v26, 0, sizeof(v26));
  v21 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v20 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  LOBYTE(v11) = a6;
  result = ObpCaptureObjectName(v11, a1, &v19, 1LL);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_WORD)v19 )
    return 3221225523LL;
  if ( a3 || (a3 = v26, AccessState = SeCreateAccessState(v26, v27, a4, a5 + 76), AccessState >= 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    AccessState = ObpLookupObjectName(
                    0LL,
                    a6,
                    a7,
                    0LL,
                    0LL,
                    (__int64)CurrentSilo,
                    (__int64)a3,
                    (__int64)v20,
                    0LL,
                    (__int64)&DmaAdapter);
    ObpReleaseLookupContext((__int64)v20);
    *a8 = 0LL;
    if ( AccessState >= 0 )
    {
      if ( SepLearningModeTokenCount )
      {
        v16 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
        *(_QWORD *)&v24 = 0LL;
        *(_QWORD *)&v23 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v16] + 16;
        *((_QWORD *)&v23 + 1) = &v19;
        SeSetLearningModeObjectInformation((__int64)&v22);
      }
      LOBYTE(v15) = a6;
      if ( (unsigned __int8)ObpCheckObjectReference(DmaAdapter, a3, v14, v15, &AccessState) )
        *a8 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v26 )
      SeDeleteAccessState(a3);
  }
  ObpFreeObjectNameBuffer((__int64)&v19);
  return (unsigned int)AccessState;
}
