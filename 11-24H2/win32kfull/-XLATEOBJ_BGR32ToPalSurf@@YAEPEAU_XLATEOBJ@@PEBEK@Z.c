/*
 * XREFs of ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x14010C2A0
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x14010C120 (-vConvertAndSaveBGRATo4@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x14010C220 (-vConvertAndSaveBGRATo8@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r8
  __int64 v7; // rdx
  FLONG flXlate; // ecx
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  __int64 v12; // rax

  v6 = Gre::Base::Globals((Gre::Base *)a1);
  v7 = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((a3 >> 8) & 0xF8 | (32 * (HIWORD(a3) & 0xF8))))];
  flXlate = a1[3].flXlate;
  if ( (flXlate & 0x800) != 0 )
  {
    v10 = *(_QWORD *)&a1[2].iSrcType;
    if ( v10 == *((_QWORD *)v6 + 471) )
    {
      v11 = v7 - 20;
      if ( (unsigned __int8)v7 < 0xAu )
        v11 = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((a3 >> 8) & 0xF8 | (32 * (HIWORD(a3) & 0xF8))))];
      LOBYTE(v7) = v11;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v12 = *(_QWORD *)(v10 + 80);
      else
        v12 = *(_QWORD *)(v10 + 72);
      LOBYTE(v7) = *(_BYTE *)(v12 + v7 + 4);
    }
  }
  return v7;
}
