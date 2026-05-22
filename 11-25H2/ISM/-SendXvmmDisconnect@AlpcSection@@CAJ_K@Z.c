/*
 * XREFs of ?SendXvmmDisconnect@AlpcSection@@CAJ_K@Z @ 0x18010E718
 * Callers:
 *     ?Share@AlpcSection@@QEAAJG_NPEA_K@Z @ 0x180083E90 (-Share@AlpcSection@@QEAAJG_NPEA_K@Z.c)
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010ADEC (--1AlpcSection@@UEAA@XZ.c)
 *     ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x18010B968 (-AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z.c)
 * Callees:
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x18009B918 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 */

__int64 __fastcall AlpcSection::SendXvmmDisconnect(__int64 a1)
{
  HANDLE FileW; // rax
  signed int LastError; // eax
  unsigned int v3; // ebx
  signed int v4; // eax
  __int64 InBuffer; // [rsp+50h] [rbp+8h] BYREF
  DWORD BytesReturned; // [rsp+58h] [rbp+10h] BYREF
  HANDLE v8; // [rsp+60h] [rbp+18h] BYREF

  InBuffer = a1;
  if ( a1 )
  {
    FileW = CreateFileW(L"\\\\.\\XVmCtrl", 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
    v8 = FileW;
    if ( FileW == (HANDLE)-1LL )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v3 = -2147418113;
      if ( LastError < 0 )
        v3 = LastError;
LABEL_14:
      SipcFileHandle::Reset(&v8);
      return v3;
    }
    BytesReturned = 0;
    if ( !DeviceIoControl(FileW, 0x150274u, &InBuffer, 8u, 0LL, 0, &BytesReturned, 0LL) )
    {
      v4 = GetLastError();
      if ( v4 != 1168 && v4 != -1070268398 )
      {
        if ( v4 > 0 )
          v4 = (unsigned __int16)v4 | 0x80070000;
        v3 = v4;
        goto LABEL_14;
      }
    }
    SipcFileHandle::Reset(&v8);
  }
  return 0LL;
}
