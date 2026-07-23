/*
 * XREFs of ObpDereferenceNamedObject @ 0x1403B0688
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403B2040 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 */

signed __int64 __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 result; // rax
  __int64 v5; // rax

  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  if ( ObpTraceFlags )
    ObpPushStackInfo(a1, 0, 1u, 0x746C6644u);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)],
        a1 + 48,
        1uLL,
        *(_QWORD *)(a1 + 8));
    if ( result < 0 )
      KeBugCheckEx(0x18u, 0LL, a1 + 48, 2uLL, result);
    if ( KeAreAllApcsDisabled() )
    {
      return ObpDeferObjectDeletion(a1);
    }
    else
    {
      v5 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a1);
      if ( v5 )
        ObpHandleRevocationBlockRemoveObject(v5);
      if ( ObpTraceFlags )
        ObpDeregisterObject(a1);
      return ObpRemoveObjectRoutine(a1, 0LL);
    }
  }
  return result;
}
