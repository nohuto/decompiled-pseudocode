/*
 * XREFs of CcMapData @ 0x140960C20
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x140236280 (CcMapAndRead.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v9; // di
  ULONG v10; // r9d
  PVOID SharedCacheMap; // rcx
  __int64 *v12; // rsi
  BOOLEAN result; // al
  int v14; // [rsp+54h] [rbp-34h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+60h] [rbp-28h] BYREF

  v9 = 0;
  v16[0] = 0LL;
  v15 = 0LL;
  v10 = Flags & 1;
  __incgsdword(4 * v10 + 35148);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( v10 )
  {
    v12 = (__int64 *)Buffer;
    *Buffer = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, FileOffset->QuadPart, &v15, &v14, (Flags >> 6) & 1, 0);
  }
  else
  {
    v12 = (__int64 *)Buffer;
    result = CcPinFileData((__int64)FileObject, FileOffset, Length, 1, 0, Flags, &v15, Buffer, v16);
    if ( !result )
    {
      __incgsdword(0x898Cu);
      return result;
    }
  }
  if ( (Flags & 0x10) == 0 )
  {
    if ( (Flags & 0x100) != 0 )
    {
      v9 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
      BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    }
    CcMapAndRead(Length, 0, 1, *v12);
    if ( (Flags & 0x100) != 0 )
      BYTE5(KeGetCurrentThread()[1].Queue) = v9 - 2;
  }
  __addgsdword(0x8990u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  *Bcb = (PVOID)(v15 + 1);
  return 1;
}
