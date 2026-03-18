/*
 * XREFs of ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003644
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003500 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140002EC8 (--1CPortClient@@UEAA@XZ.c)
 *     ??0CPortClient@@QEAA@I@Z @ 0x14000CE2C (--0CPortClient@@QEAA@I@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x14000CED0 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 */

__int64 __fastcall CDwmAppHost::LpcSyncFlush(CDwmAppHost *this, unsigned int a2)
{
  unsigned int v2; // ebx
  __int16 v3; // r9
  int v4; // eax
  void *v6; // [rsp+20h] [rbp-68h]
  unsigned int v7; // [rsp+28h] [rbp-60h]
  void *v8; // [rsp+30h] [rbp-58h]
  __int16 v9; // [rsp+38h] [rbp-50h]
  _BYTE v10[16]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]
  CDwmAppHost *v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+9Ch] [rbp+14h]

  v12 = this;
  v2 = 0;
  if ( *(&hInstance + 1) )
  {
    LODWORD(v12) = 0;
    CPortClient::CPortClient((CPortClient *)v10, a2);
    v14 = 0;
    v11 = (__int64)*(&hInstance + 1);
    v13 = -2147483638;
    v4 = CPortClient::SendComplexSyncRequest((CPortClient *)v10, 0x8000000A, &v13, v3, v6, v7, v8, v9, (int *)&v12);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x195u, 0LL);
    CPortClient::~CPortClient((CPortClient *)v10);
  }
  return v2;
}
