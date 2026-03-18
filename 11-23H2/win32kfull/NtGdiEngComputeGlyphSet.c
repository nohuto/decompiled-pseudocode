/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x1C02C87B0
 * Callers:
 *     <none>
 * Callees:
 *     EngComputeGlyphSet @ 0x1C0074570 (EngComputeGlyphSet.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C0074A70 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0298DC8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 */

struct UMPDOBJ *__fastcall NtGdiEngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars)
{
  __int64 v6; // rbx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  UMPDOBJ *v9; // rdi
  FD_GLYPHSET *v10; // rax
  struct _FD_GLYPHSET *v11; // r14
  unsigned int cjThis; // esi
  __int64 v13; // rax

  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 109);
    v10 = EngComputeGlyphSet(nCodePage, nFirstChar, cChars);
    v11 = v10;
    if ( v10 )
    {
      cjThis = v10->cjThis;
      if ( v10->cjThis )
      {
        v13 = (__int64)UMPDOBJ::_AllocUserMem(v9, cjThis, 0);
        v6 = v13;
        if ( v13 )
          v6 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v13, v11, cjThis) != 0) & v13;
      }
      EngFreeMem(v11);
    }
    --*((_DWORD *)v9 + 109);
    return (struct UMPDOBJ *)v6;
  }
  return result;
}
