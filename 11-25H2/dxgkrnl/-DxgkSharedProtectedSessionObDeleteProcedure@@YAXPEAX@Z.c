/*
 * XREFs of ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1401DBCE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1400761A8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1401843BC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

void __fastcall DxgkSharedProtectedSessionObDeleteProcedure(struct DXGPROTECTEDSESSION **a1, __int64 a2, __int64 a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+40h] [rbp-18h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 16003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 16003);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 16003);
  Global = DXGGLOBAL::GetGlobal();
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v7, Global);
  DXGPROTECTEDSESSION::DestroyProtectedSession(*a1, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v8);
  }
}
