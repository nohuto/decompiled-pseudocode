/*
 * XREFs of ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1400BD428
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceBufferProperty(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        __int64 a3,
        const void *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 i; // rax
  __int64 v12; // rcx
  char v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_QWORD *)a2;
  v14 = 0;
  v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, const void *, unsigned __int64, char *))(v5 + 280))(
         a2,
         this,
         a3,
         a4,
         a5,
         &v14);
  if ( v8 >= 0 )
  {
    if ( v14 )
    {
      v9 = *((_DWORD *)a2 + 4);
      if ( (v9 & 2) == 0 )
      {
        if ( (v9 & 1) != 0 )
        {
          v10 = *((_DWORD *)a2 + 9);
          for ( i = v10; (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
          {
            if ( (_DWORD)i == 158 )
            {
              v12 = 456LL;
              goto LABEL_13;
            }
          }
          while ( 1 )
          {
            if ( v10 >= 0xC2 )
            {
              v12 = 440LL;
              goto LABEL_13;
            }
            if ( v10 == 28 )
              break;
            v10 = dword_140270F80[v10];
          }
          v12 = 472LL;
LABEL_13:
          *((_QWORD *)a2 + 1) = *(_QWORD *)((char *)this + v12);
          *(_QWORD *)((char *)this + v12) = a2;
        }
        *((_DWORD *)a2 + 4) |= 2u;
        *((_BYTE *)this + 264) |= 1u;
      }
    }
  }
  return (unsigned int)v8;
}
