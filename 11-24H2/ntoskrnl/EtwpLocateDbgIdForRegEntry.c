/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x1408375D4
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x140452CF0 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x14058D0C4 (VslGetEtwDebugId.c)
 *     MmGetImageInformation @ 0x140837878 (MmGetImageInformation.c)
 *     EtwpFindDebugId @ 0x140837968 (EtwpFindDebugId.c)
 *     EtwpGetImageSize @ 0x140837BFC (EtwpGetImageSize.c)
 */

__int64 __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, struct _MDL **a3, unsigned int *a4)
{
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v7 = *(_QWORD *)(a2 + 88);
  if ( !v7 )
    return 3221225793LL;
  if ( !a1 )
  {
    RtlPcToFileHeader(v7, &v13);
    if ( !v13 )
      return 3221226021LL;
LABEL_5:
    result = RtlImageNtHeaderEx(1, v13 & 0xFFFFFFFFFFFFFFFCuLL, v12, &v14);
    v11 = result;
    if ( (int)result >= 0 )
    {
      v10 = v12;
      if ( !v12 )
      {
        result = EtwpGetImageSize(v14, &v12);
        v10 = v12;
      }
      if ( (int)result >= 0 )
      {
        if ( a1 == 1 && v10 && (v10 + v13 > 0x7FFFFFFF0000LL || v10 + v13 < v13) )
          v10 = v12;
        return EtwpFindDebugId(v13, v10, a3, a4, v11);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), a3, a4);
  result = MmGetImageInformation(v7, &v13, &v12, &v15);
  if ( (int)result >= 0 )
    goto LABEL_5;
  return result;
}
