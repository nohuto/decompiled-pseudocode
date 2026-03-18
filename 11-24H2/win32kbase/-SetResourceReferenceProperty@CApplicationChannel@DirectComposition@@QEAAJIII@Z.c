/*
 * XREFs of ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x140080140
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14009C6C4 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  char v6; // r14
  struct DirectComposition::CResourceMarshaler *v8; // rbp
  struct DirectComposition::CResourceMarshaler *v9; // rbx
  int v10; // r8d
  int v11; // esi
  unsigned int v13; // ecx
  __int64 j; // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  __int64 i; // rax
  __int64 v19; // rcx
  _BYTE v20[16]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a2;
  v8 = 0LL;
  v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v9 )
  {
    if ( !a4 || (v8 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a4)) != 0LL )
    {
      v15 = *(_QWORD *)v9;
      v20[0] = 0;
      v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, struct DirectComposition::CResourceMarshaler *, _BYTE *))(v15 + 288))(
              v9,
              this,
              a3,
              v8,
              v20);
      if ( v11 >= 0 )
      {
        if ( v20[0] )
        {
          v16 = *((_DWORD *)v9 + 4);
          if ( (v16 & 2) == 0 )
          {
            if ( (v16 & 1) != 0 )
            {
              v17 = *((_DWORD *)v9 + 9);
              for ( i = v17; (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
              {
                if ( (_DWORD)i == 158 )
                {
                  v19 = 456LL;
                  goto LABEL_25;
                }
              }
              while ( 1 )
              {
                if ( v17 >= 0xC2 )
                {
                  v19 = 440LL;
                  goto LABEL_25;
                }
                if ( v17 == 28 )
                  break;
                v17 = dword_140270F80[v17];
              }
              v19 = 472LL;
LABEL_25:
              *((_QWORD *)v9 + 1) = *(_QWORD *)((char *)this + v19);
              *(_QWORD *)((char *)this + v19) = v9;
            }
            *((_DWORD *)v9 + 4) |= 2u;
            *((_BYTE *)this + 264) |= 1u;
          }
        }
      }
    }
    else
    {
      v11 = -1073741811;
    }
  }
  else
  {
    v11 = -1073741790;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 && v11 >= 0 )
  {
    v13 = *((_DWORD *)v9 + 9);
    for ( j = v13; (unsigned int)j < 0xC2; LODWORD(j) = dword_140270F80[j] )
    {
      if ( (_DWORD)j == 118 )
      {
        McTemplateK0qqqqq_EtwWriteTransfer(
          *((_DWORD *)v9 + 8),
          (unsigned int)&DCompResourcePropertyUpdate,
          v10,
          *((_DWORD *)this + 7),
          *((_DWORD *)v9 + 8),
          v6,
          v13,
          a3);
        return (unsigned int)v11;
      }
    }
  }
  return (unsigned int)v11;
}
