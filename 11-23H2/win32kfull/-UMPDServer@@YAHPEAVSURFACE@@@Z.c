/*
 * XREFs of ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02BE508
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0275DF4 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C029996C (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B7140 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B71B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  struct UMPDOBJ *v4; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  if ( v4 && *((_DWORD *)v4 + 110) )
  {
    UMPDOBJ::vServer(v2, (_QWORD *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL)));
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 1LL;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 0LL;
  }
}
