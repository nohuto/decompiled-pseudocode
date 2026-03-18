/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x1400D2238
 * Callers:
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400D0464 (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::~BLTRECORD(BLTRECORD *this)
{
  int v1; // eax
  Gre::Base *v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  v1 = *((_DWORD *)this + 49);
  if ( (v1 & 0x20007) != 0 )
  {
    if ( (v1 & 0x20000) != 0 )
    {
      v5 = *((_QWORD *)this + 8);
      if ( v5 )
      {
        DEC_SHARE_REF_CNT(v5);
        v1 = *((_DWORD *)this + 49);
      }
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( (v1 & 2) != 0 )
    {
      v3 = (Gre::Base *)*((_QWORD *)this + 9);
      if ( v3 )
      {
        v4 = *((_DWORD *)v3 + 9);
        if ( v4 >= 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v3) + 8
                                                                                  * *(int *)(*((_QWORD *)this + 9) + 36LL)
                                                                                  + 1072);
        }
        else if ( v4 == -1 )
        {
          FreeThreadBufferWithTag(v3);
        }
      }
    }
    if ( (*((_DWORD *)this + 49) & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 88));
  }
}
