/*
 * XREFs of ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140017130
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140015E64 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x140017494 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int WeakReferenceBase; // ebx
  void *v10; // rax
  __int64 i; // rsi
  __int64 v12; // rbp
  __int64 v14; // rsi

  WeakReferenceBase = 0;
  *a6 = 0;
  if ( a3 == 13 && a4 )
  {
    if ( *((_QWORD *)this + 21) )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v10 = Win32AllocPoolWithQuotaZInitImpl((unsigned __int64)this, 8 * a5, 0x72774344u);
      *((_QWORD *)this + 21) = v10;
      if ( v10 )
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v12 = (unsigned int)i;
          if ( (unsigned int)i >= a5 )
            break;
          WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                                a2,
                                a4[i],
                                (struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 21) + 8 * i));
          if ( WeakReferenceBase < 0 )
          {
            if ( (_DWORD)i )
            {
              v14 = 0LL;
              do
              {
                DirectComposition::CApplicationChannel::ReleaseWeakReference(
                  (struct _RTL_GENERIC_TABLE *)a2,
                  *(struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 21) + v14));
                v14 += 8LL;
                --v12;
              }
              while ( v12 );
            }
            GreDeleteFastMutex(*((PVOID *)this + 21));
            *((_QWORD *)this + 21) = 0LL;
            break;
          }
        }
        if ( WeakReferenceBase >= 0 )
        {
          *((_DWORD *)this + 44) = a5;
          *a6 = 1;
          *((_DWORD *)this + 4) &= ~0x800u;
          GreDeleteFastMutex(a4);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)WeakReferenceBase;
}
