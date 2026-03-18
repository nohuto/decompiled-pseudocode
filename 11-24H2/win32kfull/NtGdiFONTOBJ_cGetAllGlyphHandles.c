/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x14033A670
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400DA304 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400DC5D4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x140308A90 (FONTOBJ_cGetAllGlyphHandles.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2)
{
  ULONG v4; // esi
  HGLYPH *v5; // rbx
  ULONG v6; // edi
  struct _GRETHREAD *CurrentThread; // rax
  FONTOBJ *v8; // rax
  FONTOBJ *v9; // r14
  ULONG AllGlyphHandles; // eax
  struct W32_PUSH_LOCK *v12[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]

  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  CurrentThread = GreGetCurrentThread(a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  if ( v13 )
  {
    v8 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v13, a1);
    v9 = v8;
    if ( v8 )
    {
      if ( a2 )
      {
        AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v8, 0LL);
        v4 = AllGlyphHandles;
        if ( AllGlyphHandles )
        {
          if ( AllGlyphHandles > 0x9C4000 )
            goto LABEL_14;
          v5 = (HGLYPH *)PALLOCNOZ(4 * AllGlyphHandles, 1886221639LL);
        }
      }
      v6 = FONTOBJ_cGetAllGlyphHandles(v9, v5);
      if ( v6 && a2 )
      {
        if ( v5 )
        {
          if ( !(unsigned int)bSafeCopyBits(a2, v5, 4 * v4) )
            v6 = 0;
          goto LABEL_13;
        }
      }
      else if ( v5 )
      {
LABEL_13:
        Win32FreePool(v5);
      }
    }
  }
LABEL_14:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
  return v6;
}
