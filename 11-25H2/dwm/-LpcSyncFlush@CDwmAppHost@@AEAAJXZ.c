/*
 * XREFs of ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003934
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x1400037F0 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x140002BF4 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002C40 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140003B1C (--1CPortClient@@UEAA@XZ.c)
 */

__int64 __fastcall CDwmAppHost::LpcSyncFlush(CDwmAppHost *this, __int64 a2, void *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  int v5; // eax
  void *v7; // [rsp+20h] [rbp-60h]
  __int16 v8; // [rsp+28h] [rbp-58h]
  void **v9; // [rsp+40h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-38h]
  HANDLE hObject; // [rsp+50h] [rbp-30h]
  char v12; // [rsp+58h] [rbp-28h]
  LPVOID lpMem; // [rsp+68h] [rbp-18h]
  HANDLE hHeap; // [rsp+70h] [rbp-10h]
  CDwmAppHost *v15; // [rsp+90h] [rbp+10h] BYREF
  __int64 v16; // [rsp+98h] [rbp+18h] BYREF

  v15 = this;
  v3 = 0;
  if ( *(&hInstance + 1) )
  {
    LODWORD(v15) = 0;
    CPortClient::CPortClient((CPortClient *)&v9, a2, a3);
    hObject = *(&hInstance + 1);
    v16 = 2147483658LL;
    v5 = CPortClient::SendComplexSyncRequest((HANDLE *)&v9, 0x8000000A, (HANDLE *)&v16, v4, v7, v8, (int *)&v15);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x194u, 0LL);
      CPortClient::~CPortClient((CPortClient *)&v9);
    }
    else
    {
      v9 = &CPortClient::`vftable';
      if ( v12 && hObject )
      {
        CloseHandle(hObject);
        v12 = 0;
      }
      hObject = 0LL;
      v10 = 0;
      if ( lpMem )
        HeapFree(hHeap, 0, lpMem);
    }
  }
  return v3;
}
