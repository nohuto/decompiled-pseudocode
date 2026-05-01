/*
 * XREFs of ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x18018D830
 * Callers:
 *     ??0?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@QEAA@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@14@Upermission@01234@@Z @ 0x180417E10 (--0-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayReg.c)
 *     ??$Make@VSplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@PEAV23456@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@@12@$$QEAPEAV?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@@Z @ 0x18056B3D8 (--$Make@VSplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHST.c)
 *     ??0?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultHash@PEAUHSTRING__@@@1234@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x18056B8C8 (--0-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall XWinRT::ComLock::ComLock(RTL_SRWLOCK *this, char a2)
{
  int v3; // eax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v5 = 0;
  if ( a2 || CoGetApartmentType((APTTYPE *)&v6, (APTTYPEQUALIFIER *)&v5) < 0 )
  {
    v3 = 1;
    v6 = 1;
  }
  else
  {
    v3 = v6;
  }
  if ( v3 != 3 && v3 )
  {
    LODWORD(this->Ptr) = 0;
    InitializeSRWLock(this + 1);
  }
  else
  {
    LODWORD(this->Ptr) = 1;
    LODWORD(this[1].Ptr) = 0;
  }
  return this;
}
