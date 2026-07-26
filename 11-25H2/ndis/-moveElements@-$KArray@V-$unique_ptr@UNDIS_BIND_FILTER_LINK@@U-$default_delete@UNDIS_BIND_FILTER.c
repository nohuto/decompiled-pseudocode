/*
 * XREFs of ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x140173BE0
 * Callers:
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x140160970 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x14016ACD0 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??0?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@$$QEAV01@@Z @ 0x14007C700 (--0-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x140080220 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

void __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  unsigned int v8; // ebx
  int v9; // r12d
  __int64 i; // r8
  __int64 v11; // rsi
  unsigned int v12; // edi
  int v13; // r12d
  __int64 v14; // r9
  __int64 v15; // r9
  unsigned int v16; // r15d
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdi

  if ( (_DWORD)a2 != (_DWORD)a3 )
  {
    v5 = a3;
    v6 = a2;
    if ( a4 )
    {
      if ( (unsigned int)a2 >= (unsigned int)a3 )
      {
        v12 = a3;
        v13 = a2 - a3;
        if ( (unsigned int)a3 < (unsigned int)a2 )
        {
          v14 = 8LL * (unsigned int)a3;
          do
          {
            wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
              (_QWORD *)(v14 + *(_QWORD *)(a1 + 8)),
              (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * (v12 + v13)));
            ++v12;
            v14 = v15 + 8;
          }
          while ( v12 < v6 );
        }
        v16 = a4 + v5;
        if ( v12 < v16 )
        {
          v17 = 8LL * v12;
          do
          {
            wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
              (NDIS_BIND_LINK_BASE **)(v17 + *(_QWORD *)(a1 + 8)),
              a2,
              a3);
            wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
              (_QWORD *)(v17 + *(_QWORD *)(a1 + 8)),
              (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * (v12 + v13)));
            ++v12;
            v17 += 8LL;
          }
          while ( v12 < v16 );
        }
        v18 = v6 + a4;
        if ( v12 < v6 + a4 )
        {
          v19 = 8LL * v12;
          v20 = v18 - v12;
          do
          {
            wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
              (NDIS_BIND_LINK_BASE **)(v19 + *(_QWORD *)(a1 + 8)),
              a2,
              a3);
            v19 += 8LL;
            --v20;
          }
          while ( v20 );
        }
      }
      else
      {
        v8 = a3 + a4;
        v9 = a3 - a2;
        for ( i = (unsigned int)(a3 + a4 - 1); (unsigned int)i >= *(_DWORD *)(a1 + 4); i = v8 - 1 )
        {
          wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
            (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i),
            (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * (v8 - v9 - 1)));
          --v8;
        }
        if ( v8 > v5 )
        {
          do
          {
            v11 = v8 - 1;
            wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
              (NDIS_BIND_LINK_BASE **)(8 * v11 + *(_QWORD *)(a1 + 8)),
              a2,
              i);
            wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
              (_QWORD *)(8 * v11 + *(_QWORD *)(a1 + 8)),
              (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * (v8 - v9 - 1)));
            --v8;
          }
          while ( (unsigned int)v11 > v5 );
        }
        while ( v8 > v6 )
          wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
            (NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8LL * --v8),
            a2,
            i);
      }
    }
  }
}
