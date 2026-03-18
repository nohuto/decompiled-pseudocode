/*
 * XREFs of GreSetMagicColors @ 0x1C016C72C
 * Callers:
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C016C9E0 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0049D88 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C005F78C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0089200 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0089E50 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C009AE60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C016C5E8 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r15d
  int v7; // r12d
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-99h] BYREF
  ULONG_PTR v20; // [rsp+38h] [rbp-91h] BYREF
  HSEMAPHORE v21; // [rsp+40h] [rbp-89h] BYREF
  HSEMAPHORE v22; // [rsp+48h] [rbp-81h] BYREF
  HSEMAPHORE v23; // [rsp+50h] [rbp-79h] BYREF
  PERESOURCE v24; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v25[6]; // [rsp+60h] [rbp-69h] BYREF
  struct _ERESOURCE v26; // [rsp+90h] [rbp-39h] BYREF
  __int64 v27; // [rsp+148h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( v25[0] && (a3 - 8 <= 1 || a3 - 246 <= 1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_36:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
      goto LABEL_37;
    }
    v27 = *(_QWORD *)(v25[0] + 48LL);
    v8 = v27;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v24, (struct PDEVOBJ *)&v27);
    v23 = *(HSEMAPHORE *)(v8 + 56);
    EngAcquireSemaphore(v23);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)&v26.SharedWaiters);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v26, (struct PDEVOBJ *)&v27);
    if ( !_bittest((const signed __int32 *)(v8 + 2140), 8u) )
    {
      if ( (*(_DWORD *)(v8 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor(&v26);
        DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&v26.SharedWaiters);
        SEMOBJ::vUnlock((PERESOURCE *)&v23);
        NEEDGRELOCK::vUnlock(&v24);
        goto LABEL_36;
      }
      v10 = *(_QWORD *)(v8 + 1768);
      v9 = *(_QWORD **)v10;
      v11 = *(_DWORD *)(v10 + 16);
      while ( 1 )
      {
        v8 = v9[6];
        v27 = v8;
        if ( _bittest((const signed __int32 *)(v8 + 2140), 8u) )
          break;
        v9 = (_QWORD *)*v9;
        if ( !--v11 )
          goto LABEL_35;
      }
      v7 = 1;
    }
    v19 = *(_QWORD *)(v8 + 1776);
    v12 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
    v22 = *(HSEMAPHORE *)(v12 + 136);
    EngAcquireSemaphore(v22);
    v21 = *(HSEMAPHORE *)(v12 + 40);
    EngAcquireSemaphore(v21);
    v20 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 24) + 6000LL);
    v14 = XEPALOBJ::ulDispatchGFPEFunction(&v20, *(_DWORD *)(v20 + 100), a2);
    v15 = v14;
    if ( v14 != -1 )
    {
      if ( v14 >= 0xA )
        v15 = v14 + 236;
      if ( v15 == a3 )
      {
        if ( !v7 )
        {
          v5 = 1;
          goto LABEL_29;
        }
      }
      else if ( v15 - 8 > 1 && v15 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v16 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v16 = 15780518;
        }
        else
        {
          v16 = 10789024;
          if ( a3 == 246 )
            v16 = 15793151;
        }
        v17 = bSetMagicColor((__int64)&v27, v19, a3, v16);
        v5 = 0;
        goto LABEL_28;
      }
    }
    v17 = bSetMagicColor((__int64)&v27, v19, a3, a2);
    v5 = v17;
LABEL_28:
    v6 = v17;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v21);
    if ( v6 && (*(_DWORD *)(v8 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v8 + 1736) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 1736))(
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 1768LL),
          &v19,
          0LL,
          0LL,
          *(_DWORD *)(v19 + 28));
      else
        v5 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v22);
    goto LABEL_35;
  }
LABEL_37:
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v5;
}
