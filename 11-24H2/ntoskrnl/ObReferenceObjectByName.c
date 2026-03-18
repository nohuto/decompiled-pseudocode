/*
 * XREFs of ObReferenceObjectByName @ 0x14083F230
 * Callers:
 *     IopGetDriverPathInformation @ 0x140596398 (IopGetDriverPathInformation.c)
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409B9634 (IopGetLegacyVetoListDrivers.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x140408FE0 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x1404833B0 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpFreeObjectNameBuffer @ 0x14083E740 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     ObpCaptureObjectName @ 0x14089CFB0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int64 v17; // rdx
  int AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
  __int128 v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h]
  __int128 v23; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-48h]
  __int128 v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  __int64 v27[20]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v28[224]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v28, 0, sizeof(v28));
  DmaAdapter = 0LL;
  v20 = 0LL;
  memset_0(v27, 0, sizeof(v27));
  v22 = 0LL;
  v26 = 0LL;
  *(_OWORD *)v21 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  LOBYTE(v11) = a6;
  result = ObpCaptureObjectName(v11, a1, &v20, 1LL);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_WORD)v20 )
    return 3221225523LL;
  if ( a3 || (a3 = v27, AccessState = SeCreateAccessState(v27, v28, a4, a5 + 76), AccessState >= 0) )
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
                    (__int64)v21,
                    0LL,
                    (__int64)&DmaAdapter);
    ObpReleaseLookupContext((__int64)v21);
    *a8 = 0LL;
    if ( AccessState >= 0 )
    {
      if ( SepLearningModeTokenCount )
      {
        v17 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
        *(_QWORD *)&v25 = 0LL;
        *(_QWORD *)&v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v17] + 16;
        *((_QWORD *)&v24 + 1) = &v20;
        SeSetLearningModeObjectInformation((__int64)&v23);
      }
      LOBYTE(v15) = a6;
      if ( (unsigned __int8)ObpCheckObjectReference(DmaAdapter, a3, v14, v15, &AccessState) )
        *a8 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v27 )
      SeDeleteAccessState(a3);
  }
  ObpFreeObjectNameBuffer((__int64)&v20, v13, v14, v15);
  return (unsigned int)AccessState;
}
