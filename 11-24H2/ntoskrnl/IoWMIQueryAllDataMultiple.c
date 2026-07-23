/*
 * XREFs of IoWMIQueryAllDataMultiple @ 0x1407A3A10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipQueryAllDataMultiple @ 0x1409B169C (WmipQueryAllDataMultiple.c)
 */

NTSTATUS __stdcall IoWMIQueryAllDataMultiple(
        PVOID *DataBlockObjectList,
        ULONG ObjectCount,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v8; // eax
  NTSTATUS AllDataMultiple; // edx
  __int64 v11; // [rsp+40h] [rbp-98h] BYREF
  int v12; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v13[76]; // [rsp+54h] [rbp-84h] BYREF

  v12 = 0;
  memset_0(v13, 0, 0x44uLL);
  LODWORD(v11) = 0;
  if ( !DataBlockObjectList || !ObjectCount || !InOutBufferSize )
    return -1073741811;
  v8 = *InOutBufferSize;
  if ( !OutBuffer || v8 < 0x48 )
  {
    OutBuffer = &v12;
    v8 = 72;
  }
  AllDataMultiple = WmipQueryAllDataMultiple(
                      ObjectCount,
                      (int)DataBlockObjectList,
                      0,
                      0,
                      OutBuffer,
                      v8,
                      0LL,
                      (__int64)&v11);
  if ( AllDataMultiple >= 0 )
  {
    if ( (*((_DWORD *)OutBuffer + 11) & 0x20) != 0 )
    {
      *InOutBufferSize = *((_DWORD *)OutBuffer + 12);
    }
    else
    {
      *InOutBufferSize = v11;
      if ( OutBuffer != &v12 )
        return AllDataMultiple;
    }
    return -1073741789;
  }
  return AllDataMultiple;
}
