/*
 * XREFs of ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x14003DA08
 * Callers:
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 */

void __fastcall vMarkSurfacesWithHDEV(HDEV a1)
{
  __int64 v2; // r8
  char v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // edi
  __int64 i; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  HSEMAPHORE v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 3856), 1uLL);
  v4 = *((_QWORD *)a1 + 223);
  v5 = v3 & 0xF;
  *(_QWORD *)(v2 + 16 * v5 + 3880) = v4;
  *(_QWORD *)(v2 + 16 * (v5 + 242)) = a1;
  SEMOBJ<20>::SEMOBJ<20>(&v12);
  v11 = 0LL;
  v7 = (_DWORD)a1[10] & 0x80000;
  for ( i = 0LL; ; i = v9 )
  {
    LOBYTE(v6) = 5;
    v9 = HmgSafeNextObjt(i, v6, &v11);
    if ( !v9 )
      break;
    v10 = v11;
    if ( *(HDEV *)(v11 + 48) == a1 || !v7 && *(_QWORD *)(v11 + 40) == v4 )
    {
      if ( *(_WORD *)(v11 + 100)
        || (*(_DWORD *)(v11 + 112) &= 0xFFFC4A10, *(_QWORD *)(v10 + 40) = 0LL, *(HDEV *)(v10 + 48) == a1) )
      {
        *(_QWORD *)(v10 + 48) = 0LL;
      }
    }
  }
  SEMOBJ<20>::vUnlock(&v12);
}
