/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x14042DD5C
 * Callers:
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x140279ED8 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403D1918 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x1400654D8 (--0DXGSPINLOCK@@QEAA@XZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(
        BLTQUEUE *this,
        struct DXGDODPRESENT *a2,
        int a3,
        struct _KEVENT *a4,
        unsigned __int8 a5)
{
  char *v8; // rcx
  unsigned int v9; // edx
  char *v10; // rbx
  char **v11; // rax

  *((_DWORD *)this + 65) = -1;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 352) = 0;
  *((_QWORD *)this + 49) = a4;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 75;
  *((_DWORD *)this + 112) = -1;
  DXGSPINLOCK::DXGSPINLOCK((BLTQUEUE *)((char *)this + 456));
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 190) = 0;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_DWORD *)this + 200) = 0;
  *((_DWORD *)this + 201) = -1;
  *((_DWORD *)this + 202) = 75;
  *((_DWORD *)this + 252) = 0;
  `vector constructor iterator'((char *)this + 1016, 576LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)this + 343) = 0LL;
  v8 = (char *)this + 232;
  *((_DWORD *)this + 688) = 0;
  *(_OWORD *)((char *)this + 2888) = 0LL;
  *((_QWORD *)this + 345) = 0LL;
  v9 = 0;
  *((_QWORD *)this + 353) = 0LL;
  *((_QWORD *)this + 354) = 0LL;
  *((_QWORD *)this + 355) = 0LL;
  *((_QWORD *)this + 356) = 0LL;
  *((_QWORD *)this + 357) = 0LL;
  *((_DWORD *)this + 716) = 0;
  *((_QWORD *)this + 359) = 0LL;
  *((_QWORD *)this + 360) = 0LL;
  *((_DWORD *)this + 734) = -1;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_DWORD *)this + 726) = 0;
  *((_QWORD *)this + 364) = 0LL;
  v10 = (char *)this + 1024;
  *((_QWORD *)this + 365) = 0LL;
  *((_QWORD *)this + 368) = 1LL;
  *((_DWORD *)this + 732) = 0;
  *((_DWORD *)this + 733) = 75;
  *((_DWORD *)this + 738) = 0;
  *((_QWORD *)this + 370) = 0LL;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  *((_DWORD *)this + 34) = 2 - (a5 != 0);
  do
  {
    v11 = (char **)*((_QWORD *)this + 30);
    if ( *v11 != v8 )
      __fastfail(3u);
    *(_QWORD *)v10 = v8;
    ++v9;
    *((_QWORD *)v10 + 1) = v11;
    *v11 = v10;
    *((_QWORD *)this + 30) = v10;
    v10 += 576;
  }
  while ( v9 < 3 );
  if ( a2 )
    *((_QWORD *)this + 31) = *(_QWORD *)((char *)DXGDODPRESENT::GetAdapter(a2) + 412);
  *((_DWORD *)this + 64) = a3;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *(_QWORD *)((char *)this + 516) = 0LL;
  *((_QWORD *)this + 48) = 0x100000040LL;
  *((_DWORD *)this + 103) = 0;
  *((_OWORD *)this + 20) = 0LL;
  *((_OWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *(_OWORD *)((char *)this + 600) = 0LL;
  *(_OWORD *)((char *)this + 616) = 0LL;
  *(_OWORD *)((char *)this + 632) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 28, NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 696),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 672);
  KeSetImportanceDpc((PRKDPC)((char *)this + 696), HighImportance);
  memset((char *)this + 816, 0, 0xB8uLL);
  KeInitializeEvent((PRKEVENT)this + 22, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)this + 23, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)this + 24, SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 160), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 264), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 2768), 0);
  return this;
}
