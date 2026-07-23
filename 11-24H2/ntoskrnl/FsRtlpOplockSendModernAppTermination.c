/*
 * XREFs of FsRtlpOplockSendModernAppTermination @ 0x14048F158
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x1403CE520 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14057E780 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x1407092D0 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlSendModernAppTermination @ 0x14048F270 (FsRtlSendModernAppTermination.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockSendModernAppTermination(__int64 a1, __int64 a2)
{
  char v2; // bp
  ULONG v4; // edi
  int *PoolWithTag; // rbx
  _QWORD *v6; // rsi
  unsigned int v7; // edx
  _QWORD *i; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v2 = 0;
  if ( a2 || (v10 = *(_QWORD *)(a1 + 16)) == 0 )
  {
    v4 = 4096;
    PoolWithTag = (int *)ExAllocatePoolWithTag((POOL_TYPE)1025, 0x1000uLL, 0x74725346u);
    if ( PoolWithTag )
    {
      v6 = (_QWORD *)(a1 + 72);
      v2 = 1;
      v7 = 1;
      for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
      {
        if ( i == v6 )
        {
          *PoolWithTag = v7 - 1;
          goto LABEL_8;
        }
        if ( v7 >= 0x400 )
          break;
        v9 = v7++;
        PoolWithTag[v9] = *(_DWORD *)(i[4] + 464LL);
      }
      memset_0(PoolWithTag + 1, 0, 0xFFCuLL);
      *PoolWithTag = -1;
    }
    else
    {
      v11 = -1;
      PoolWithTag = &v11;
      v12 = 0;
    }
    v4 = 4;
  }
  else
  {
    v11 = 1;
    PoolWithTag = &v11;
    v4 = 8;
    v12 = *(_DWORD *)(v10 + 464);
  }
LABEL_8:
  FsRtlSendModernAppTermination(PoolWithTag, v4);
  if ( v2 )
    ExFreePoolWithTag(PoolWithTag, 0);
}
