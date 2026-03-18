/*
 * XREFs of ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1400FD614
 * Callers:
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1400FD570 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140016220 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x14003EF50 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::ReportStates(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *i; // rsi
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // [rsp+50h] [rbp-18h]
  __int64 v9; // [rsp+58h] [rbp-10h]

  v3 = (char *)this + 72;
  for ( i = (char *)*((_QWORD *)this + 9); i != v3; i = *(char **)i )
  {
    v6 = i - 120;
    if ( (*((_DWORD *)i - 14) == 1
       || *((_DWORD *)i - 14) == 2
       || *((_DWORD *)i - 14) == 3
       || (unsigned int)(*((_DWORD *)i - 14) - 4) < 2)
      && (byte_140081241 & 0x10) != 0 )
    {
      McTemplateK0qxxx_EtwWriteTransfer();
    }
    if ( (byte_140081242 & 4) != 0 )
    {
      v7 = *((_QWORD *)this + 4);
      LODWORD(v9) = *((_DWORD *)v6 + 16);
      LODWORD(v8) = *(_DWORD *)v7;
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v7,
        a2,
        a3,
        **(_QWORD **)(*(_QWORD *)(v7 + 8) + 8LL),
        i - 120,
        this,
        *((_QWORD *)this + 7),
        v7,
        *((_QWORD *)v6 + 4),
        *((_QWORD *)v6 + 5),
        v8,
        v9);
    }
  }
}
