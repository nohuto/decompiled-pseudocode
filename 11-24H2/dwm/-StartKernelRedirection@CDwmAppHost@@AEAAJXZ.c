/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002010
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400044CC (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002158 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140002EC8 (--1CPortClient@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14000C7FC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??0CPortClient@@QEAA@I@Z @ 0x14000CE2C (--0CPortClient@@QEAA@I@Z.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  int v5; // eax
  signed int LastError; // eax
  unsigned int v8; // [rsp+20h] [rbp-58h]
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  _BYTE v11[16]; // [rsp+58h] [rbp-20h] BYREF

  v2 = 0;
  if ( *(&hInstance + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v9, a2);
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v3, (unsigned int)&EstablishKernelRedirection, v4, 1, (__int64)v11);
    v10 = (__int64)*(&hInstance + 1);
    v5 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v9, 0x40000025u);
    v2 = v5;
    if ( v5 < 0 )
    {
      v8 = 355;
    }
    else
    {
      SetLastError(0);
      if ( !(unsigned int)DwmKernelStartup() )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( (v2 & 0x80000000) == 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140012150, 2u, v2, 0x165u, 0LL);
        goto LABEL_7;
      }
      v5 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v9, 0x40000026u);
      v2 = v5;
      if ( v5 >= 0 )
      {
LABEL_7:
        CPortClient::~CPortClient((CPortClient *)v9);
        return v2;
      }
      v8 = 359;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140012150, 2u, v5, v8, 0LL);
    goto LABEL_7;
  }
  return v2;
}
