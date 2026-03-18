/*
 * XREFs of ?GetDisplayCalloutEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1401897DC
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x14038E4E0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

bool __fastcall DXGDISPLAYCALLOUTQUEUE::GetDisplayCalloutEntry(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY **a2)
{
  struct DISPLAY_CALLOUT_ENTRY **v4; // rbx
  struct DISPLAY_CALLOUT_ENTRY *v5; // rax
  struct DISPLAY_CALLOUT_ENTRY *v7; // rcx
  bool v8; // zf
  bool v9; // bl
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = (struct DISPLAY_CALLOUT_ENTRY **)((char *)this + 48);
  v5 = *v4;
  if ( *v4 == (struct DISPLAY_CALLOUT_ENTRY *)v4 )
  {
    *a2 = 0LL;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
    return 0;
  }
  else
  {
    if ( *((struct DISPLAY_CALLOUT_ENTRY ***)v5 + 1) != v4
      || (v7 = *(struct DISPLAY_CALLOUT_ENTRY **)v5, *(struct DISPLAY_CALLOUT_ENTRY **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *v4 = v7;
    *((_QWORD *)v7 + 1) = v4;
    v8 = *v4 == (struct DISPLAY_CALLOUT_ENTRY *)v4;
    *a2 = v5;
    v9 = !v8;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
    return v9;
  }
}
