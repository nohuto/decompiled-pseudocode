/*
 * XREFs of IoWMIQueryAllData @ 0x140A701A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 */

NTSTATUS __stdcall IoWMIQueryAllData(PVOID DataBlockObject, PULONG InOutBufferSize, PVOID OutBuffer)
{
  ULONG v6; // eax
  NTSTATUS AllData; // ecx
  int v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v13[76]; // [rsp+44h] [rbp-74h] BYREF

  v12 = 0;
  memset_0(v13, 0, 0x44uLL);
  LODWORD(v11) = 0;
  v6 = *InOutBufferSize;
  if ( !OutBuffer || v6 < 0x48 )
  {
    OutBuffer = &v12;
    v6 = 72;
  }
  *((_QWORD *)OutBuffer + 2) = 0LL;
  *((_DWORD *)OutBuffer + 3) = 0;
  *((_DWORD *)OutBuffer + 11) = 1;
  *(_DWORD *)OutBuffer = 48;
  AllData = WmipQueryAllData(DataBlockObject, 0LL, 0, (__int64)OutBuffer, v6, (unsigned int *)&v11);
  if ( AllData >= 0 )
  {
    v9 = *((_DWORD *)OutBuffer + 11);
    if ( (v9 & 0x100) != 0 )
    {
      return -1073741637;
    }
    else if ( (v9 & 0x20) != 0 )
    {
      AllData = -1073741789;
      *InOutBufferSize = *((_DWORD *)OutBuffer + 12);
    }
    else
    {
      *InOutBufferSize = v11;
      v10 = AllData;
      if ( OutBuffer == &v12 )
        return -1073741789;
      return v10;
    }
  }
  return AllData;
}
