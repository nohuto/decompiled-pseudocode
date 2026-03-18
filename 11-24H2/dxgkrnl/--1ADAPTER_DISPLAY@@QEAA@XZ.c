/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x140196A94
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x140065214 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140023380 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x14004F630 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1401E4D3C (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this)
{
  __int64 v1; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  char *v10; // rcx
  char *v11; // rbx
  struct _KEVENT *v12; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 15);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 88) )
    {
      Global = DXGGLOBAL::GetGlobal();
      v4 = *((_QWORD *)this + 15);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGGLOBAL *)((char *)Global + 1520), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
      v5 = v4 - 24;
      v6 = -v4;
      v7 = v5 & -(__int64)(v6 != 0);
      v8 = *(_QWORD *)v7;
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)((v5 & -(__int64)(v6 != 0)) + 8), *v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
    }
    DestroyOutputDuplManager(*((struct OUTPUTDUPL_MGR **)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  v10 = (char *)*((_QWORD *)this + 16);
  if ( v10 )
  {
    v11 = v10 - 8;
    `vector destructor iterator'(
      v10,
      4024LL,
      *((_QWORD *)v10 - 1),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
    *((_QWORD *)this + 16) = 0LL;
  }
  v12 = (struct _KEVENT *)*((_QWORD *)this + 84);
  if ( v12 )
  {
    KeSetEvent(v12, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 84));
    *((_QWORD *)this + 84) = 0LL;
  }
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 91);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 680));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 624));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 552));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 480));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 376));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 296));
  DXGADAPTER_REFERENCE::Assign((ADAPTER_DISPLAY *)((char *)this + 248), 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 200));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 152));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 10);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
