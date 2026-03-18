/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002A10
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140004960 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x140002BF4 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002D88 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140003B1C (--1CPortClient@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x140004EE0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14000DF9C (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // r8d
  int v6; // eax
  int v7; // eax
  signed int LastError; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-60h]
  void **v12; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+38h] [rbp-48h]
  HANDLE hObject; // [rsp+40h] [rbp-40h]
  char v15; // [rsp+48h] [rbp-38h]
  LPVOID lpMem; // [rsp+58h] [rbp-28h]
  HANDLE hHeap; // [rsp+60h] [rbp-20h]
  _BYTE v18[16]; // [rsp+68h] [rbp-18h] BYREF

  v3 = 0;
  if ( !*(&hInstance + 1) )
    return v3;
  CPortClient::CPortClient((CPortClient *)&v12, a2, a3);
  if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v4, (unsigned int)&EstablishKernelRedirection, v5, 1, (__int64)v18);
  hObject = *(&hInstance + 1);
  v6 = CPortClient::SendSimpleAsyncRequest((CPortClient *)&v12, 0x40000025u);
  v3 = v6;
  if ( v6 >= 0 )
  {
    SetLastError(0);
    if ( (unsigned int)DwmKernelStartup() )
    {
      v7 = CPortClient::SendSimpleAsyncRequest((CPortClient *)&v12, 0x40000026u);
      v3 = v7;
      if ( v7 >= 0 )
        goto LABEL_7;
      v10 = v7;
      v11 = 360;
    }
    else
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      v11 = 358;
      if ( (v3 & 0x80000000) == 0 )
        v3 = -2003304445;
      v10 = v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140013198, 2u, v10, v11, 0LL);
    CPortClient::~CPortClient((CPortClient *)&v12);
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140013198, 2u, v6, 0x164u, 0LL);
LABEL_7:
  v12 = &CPortClient::`vftable';
  if ( v15 && hObject )
  {
    CloseHandle(hObject);
    v15 = 0;
  }
  hObject = 0LL;
  v13 = 0;
  if ( lpMem )
    HeapFree(hHeap, 0, lpMem);
  return v3;
}
