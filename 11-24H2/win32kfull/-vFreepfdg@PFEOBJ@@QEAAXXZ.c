/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8
 * Callers:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1400FF5D0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140152C44 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401BD138 (-GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x140215BC8 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x1400FF884 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ??0?$SEMOBJ@$0BM@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400FFC68 (--0-$SEMOBJ@$0BM@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1400FFDC0 (UmfdTrueTypeFreeGlyphset.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall PFEOBJ::vFreepfdg(__int64 **this, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 SessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  HSEMAPHORE v11; // rbx
  struct _GRETHREAD *v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  __int64 *v15; // rdx
  _DWORD *v16; // rcx
  HSEMAPHORE v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = **this;
  SessionState = W32GetSessionState(this, a2, a3);
  SEMOBJ<28>::SEMOBJ<28>(&v17, *(_QWORD *)(SessionState + 96) + 4872LL);
  v10 = *((_DWORD *)*this + 34);
  if ( v10 )
  {
    *((_DWORD *)*this + 34) = v10 - 1;
    if ( !*((_DWORD *)*this + 34) )
    {
      if ( UmfdIsUmfdTrueTypePff((const struct PFF *)v6, v8, v9) )
      {
        UmfdTrueTypeFreeGlyphset(*(_QWORD *)(v6 + 88), *((unsigned int *)*this + 2), (*this)[2]);
        (*this)[2] = 0LL;
      }
      else
      {
        v14 = *(_QWORD *)(v6 + 96);
        if ( (*(_DWORD *)(v14 + 40) & 0x8000) != 0 && *(_QWORD *)(v14 + 3016) )
        {
          v15 = *this;
          if ( *(_BYTE *)((*this)[4] + 44) == 2 && (v16 = (_DWORD *)v15[2]) != 0LL && (v16[1] & 0x10) != 0 )
          {
            Win32FreePool(v16);
          }
          else
          {
            v4 = v15[2];
            v5 = v15[3];
          }
          (*this)[2] = 0LL;
          if ( v4 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 96) + 3016LL))(v4, v5);
        }
      }
    }
  }
  v11 = v17;
  if ( v17 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GlyphSet", v17);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    if ( v12 )
    {
      v13 = (*(_QWORD *)v12 & 0xFFFFFFFFEFFFFFFFuLL) == 0;
      *(_QWORD *)v12 &= ~0x10000000uLL;
      if ( v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v11);
  }
}
