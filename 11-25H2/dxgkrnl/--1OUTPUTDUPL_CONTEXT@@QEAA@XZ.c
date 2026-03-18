/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1401E1A14
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1400763F0 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1400763C8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1401DEEB4 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ??1DDAMetaData@@QEAA@XZ @ 0x1401E19E0 (--1DDAMetaData@@QEAA@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1404008A4 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  void *v5; // rsi
  __int64 v6; // rbp
  DDAMetaData **v7; // rdi
  __int64 v8; // r14
  DDAMetaData *v9; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  AUTOEXPANDALLOCATION **v12; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v5 = (void *)*((_QWORD *)this + i + 6);
    if ( v5 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v6 = 2LL;
  v7 = (DDAMetaData **)((char *)this + 80);
  v8 = 2LL;
  do
  {
    v9 = *v7;
    if ( *v7 )
    {
      DDAMetaData::~DDAMetaData(*v7);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    }
    *v7 = 0LL;
    v7 += 12;
    --v8;
  }
  while ( v8 );
  if ( *((_DWORD *)this + 76) )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionData);
    *((_DWORD *)this + 76) = 0;
  }
  v12 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    if ( *v12 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(*v12);
      *v12 = 0LL;
    }
    v12 += 12;
    --v6;
  }
  while ( v6 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventOutputDuplicationDestroy, a3, this);
  _InterlockedDecrement(&g_DbgGlobalContextCount);
}
