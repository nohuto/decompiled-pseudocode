/*
 * XREFs of VidMmReportMultiAlloc @ 0x1400FEE50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003E604 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 */

void __fastcall VidMmReportMultiAlloc(__int64 a1, __int64 a2)
{
  __int64 **v2; // r10
  __int64 v3; // rdx
  __int64 *v4; // r8
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // r8

  v2 = *(__int64 ***)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = v2[2];
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    if ( v4 )
    {
      v8 = v4[5];
      v6 = *((unsigned int *)v4 + 4);
      if ( v8 )
      {
        v7 = *(unsigned int *)(v8 + 16);
        v5 = *(_QWORD *)(v8 + 48);
      }
    }
    v9 = **v2;
    if ( (byte_140081241 & 0x10) != 0 )
    {
      if ( (**(_DWORD **)(v9 + 376) & 8) != 0 )
        v10 = *(_QWORD *)(v9 + 216);
      else
        v10 = (*v2)[2];
      v11 = v4[5];
      if ( v11 )
        v3 = *(_QWORD *)(v11 + 56);
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 16),
        &EventReportDeviceAllocation,
        v11,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL) + 80LL),
        a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
        v2,
        v9,
        v11,
        v3,
        v6,
        v7,
        v5,
        v10,
        *(_QWORD *)(v9 + 232));
    }
  }
}
