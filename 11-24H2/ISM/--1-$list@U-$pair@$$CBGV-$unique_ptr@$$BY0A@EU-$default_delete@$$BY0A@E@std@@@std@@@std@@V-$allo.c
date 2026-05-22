/*
 * XREFs of ??1?$list@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18018E8E4
 * Callers:
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$9 @ 0x1801D891C (_PenHapticInterface--PenHapticInterface_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18018E388 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

void __fastcall std::list<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>::~list<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x20);
}
