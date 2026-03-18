/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4
 * Callers:
 *     hCreateSolidBrushInternal @ 0x14000D270 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x140085460 (GreSetSolidBrush.c)
 *     SetSysColor @ 0x1400A0B4C (SetSysColor.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x140030770 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x14003CBE0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140085760 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140085B74 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x1400861B0 (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rbx
  unsigned int v9; // eax
  void *v10; // rdi
  int v11; // esi
  __int64 v12; // rdx
  BRUSH *v13; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  HSEMAPHORE v19; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v20[8]; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+38h] [rbp-48h]
  _QWORD v22[7]; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v22, a1);
  v8 = v22[0];
  if ( v22[0] )
  {
    v9 = *(_DWORD *)(v22[0] + 40LL);
    if ( (v9 & 0x10) != 0 && ((v9 & 0x200) == 0 || a4) && ((v9 >> 10) & 1) == a3 )
    {
      v10 = 0LL;
      v11 = 0;
      SEMOBJ<20>::SEMOBJ<20>(&v19);
      if ( *(_DWORD *)(v8 + 8) == 1 || a4 )
      {
        v7 = 1;
        *(_DWORD *)(v8 + 76) = a2;
        HANDLELOCK::HANDLELOCK((__int64)v20, (_DWORD *)v8, 1u);
        if ( v21 )
        {
          if ( *(_DWORD *)(v8 + 8) == 1 )
          {
            if ( *(_DWORD *)(v8 + 100) != -1 )
            {
              v15 = *(_DWORD *)(v8 + 40);
              if ( v15 >= 0 )
              {
                v10 = *(void **)(v8 + 120);
                v11 = ((unsigned int)v15 >> 30) & 1;
              }
            }
            *(_DWORD *)(v8 + 96) = 0;
            *(_DWORD *)(v8 + 100) = -1;
            if ( a4 )
            {
              *(_DWORD *)(v8 + 40) &= ~0x80000000;
            }
            else
            {
              *(_DWORD *)(v8 + 80) = 7;
              *(_DWORD *)(v8 + 40) = 20;
            }
          }
          else
          {
            v18 = 0LL;
            v16 = 0LL;
            *(_DWORD *)(v8 + 104) = -1;
            *(_DWORD *)(v8 + 108) = -1;
            *(_DWORD *)(v8 + 112) = -1;
            while ( 1 )
            {
              LOBYTE(v12) = 1;
              v17 = HmgSafeNextObjt(v16, v12, &v18);
              v16 = v17;
              if ( !v17 )
                break;
              if ( *(_QWORD *)(v18 + 1312) == v8 )
                *(_DWORD *)(v18 + 316) |= 1u;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v20);
        }
        *(_DWORD *)(v8 + 44) = BRUSH::ulGlobalBrushUnique(v13);
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v20);
      }
      SEMOBJ<20>::vUnlock(&v19);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v10, v11);
        *(_QWORD *)(v8 + 120) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v22);
  return v7;
}
