/*
 * XREFs of ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x140080C14
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v8; // rsi
  struct DirectComposition::CResourceMarshaler *v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  int v13; // eax
  unsigned int v14; // edx
  __int64 i; // rax
  __int64 v16; // rdx
  struct DirectComposition::CResourceMarshaler *v17; // rax
  __int64 v18; // rbp
  struct DirectComposition::CResourceMarshaler *v19; // rax
  _BYTE v20[24]; // [rsp+40h] [rbp-18h] BYREF

  v20[0] = 0;
  v8 = 0LL;
  v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 192LL))(v9);
    if ( v10
      && (v17 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a3)) != 0LL
      && (v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v17 + 192LL))(v17)) != 0
      && (!a5
       || (v19 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a5)) != 0LL
       && (v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v19 + 192LL))(v19)) != 0) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v10 + 328LL))(
              v10,
              this,
              v18,
              a4,
              v8,
              v20);
      if ( v11 >= 0 )
      {
        if ( v20[0] )
        {
          v13 = *(_DWORD *)(v10 + 16);
          if ( (v13 & 2) == 0 )
          {
            if ( (v13 & 1) != 0 )
            {
              v14 = *(_DWORD *)(v10 + 36);
              for ( i = v14; (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
              {
                if ( (_DWORD)i == 158 )
                {
                  v16 = 456LL;
                  goto LABEL_18;
                }
              }
              while ( 1 )
              {
                if ( v14 >= 0xC2 )
                {
                  v16 = 440LL;
                  goto LABEL_18;
                }
                if ( v14 == 28 )
                  break;
                v14 = dword_140270F80[v14];
              }
              v16 = 472LL;
LABEL_18:
              *(_QWORD *)(v10 + 8) = *(_QWORD *)((char *)this + v16);
              *(_QWORD *)((char *)this + v16) = v10;
            }
            *(_DWORD *)(v10 + 16) |= 2u;
            *((_BYTE *)this + 264) |= 1u;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v11;
}
