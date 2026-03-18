/*
 * XREFs of VidMmReportMultiAlloc @ 0x1400FEC40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003C5A8 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 */

void __fastcall VidMmReportMultiAlloc(__int64 a1, __int64 a2)
{
  __int64 **v2; // rsi
  __int64 v3; // rdi
  __int64 *v5; // rdx
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 ProcessID; // rax
  __int64 v15; // r8
  __int64 v16; // [rsp+C8h] [rbp+10h]
  __int64 v17; // [rsp+D0h] [rbp+18h]
  __int64 v18; // [rsp+D8h] [rbp+20h]

  v2 = *(__int64 ***)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = v2[2];
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    if ( v5 )
    {
      v9 = v5[5];
      v6 = *((_DWORD *)v5 + 4);
      if ( v9 )
      {
        v7 = *(_DWORD *)(v9 + 16);
        v8 = *(_QWORD *)(v9 + 48);
      }
    }
    v10 = **v2;
    if ( (byte_140081241 & 0x10) != 0 )
    {
      v16 = *(_QWORD *)(v10 + 248);
      if ( (**(_DWORD **)(v10 + 392) & 8) != 0 )
        v11 = *(_QWORD *)(v10 + 232);
      else
        v11 = (*v2)[2];
      v12 = v5[5];
      v17 = v7;
      v18 = v6;
      if ( v12 )
        v3 = *(_QWORD *)(v12 + 56);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
      ProcessID = DXGPROCESS::GetProcessID(*(DXGPROCESS **)(a1 + 40));
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        v18,
        &EventReportDeviceAllocation,
        v15,
        ProcessID,
        a1,
        v13,
        v2,
        v10,
        v12,
        v3,
        v18,
        v17,
        v8,
        v11,
        v16);
    }
  }
}
